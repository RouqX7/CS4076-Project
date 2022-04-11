#include "Player.h"
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
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    // shoot with the spacebar
    else if (event->key() == Qt::Key_Space){
        // create a bullet

        this->bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}


