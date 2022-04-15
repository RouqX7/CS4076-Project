#include "Enemy.h"
#include <QTimer>
#include "Battle.h"
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand()

extern Battle * game;

Enemy::Enemy(double health,int spawn, QGraphicsItem* parent): QObject(), QGraphicsPixmapItem(parent){
    //set random position x position

    this->health = health;
    this->spawn = spawn;

    int random_number = rand() % 700;
    setPos(random_number,0);

    // draw the rect
    setPixmap(QPixmap(":/images/Enemyfirst.png")); //same size as the player
    setScale(0.15);
    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}
Enemy::~Enemy(){
  //  delete this;
}
void Enemy::move(){
    // move enemy down
    setPos(x(),y()+ 5);
    //destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        //decrease the health
        //game->health->decrease();

        if(scene()!=nullptr)
        scene()->removeItem(this);
        delete this;

    }


}
