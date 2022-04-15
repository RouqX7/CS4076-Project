#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Player.h"
#include <PowerUp.h>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <qdebug.h>
#include "Bullet.h"
#include "Enemy.h"

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
qDebug()<<"rett";
    //set graphic
    setPixmap(QPixmap(":/images/mainSpaceship.png"));
}


void Player::keyPressEvent(QKeyEvent *event){
    // move the player left and right
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(pos().x()-10,pos().y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(pos().x()+10,pos().y());
    }
    // shoot with the spacebar
    else if (event->key() == Qt::Key_Space){
        // create a bullet

        if(this->bullet != nullptr){
            qDebug()<<QString::fromStdString(this->bullet->img);

            this->bullet = new PowerUp(this->bullet->img,"",this->bullet->dmg);

        }else{
            this->bullet = new PowerUp(":/images/bulletlazer.jpg","",0.5);
        }
 this->bullet->setPos(pos().x(),y());
        scene()->addItem(bullet);
         this->bullet->fire();
    }
}


