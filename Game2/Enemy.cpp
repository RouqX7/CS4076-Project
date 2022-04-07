#include "Enemy.h"
#include <QTimer>
#include "Game.h"
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand()

extern Game * game;

Enemy::Enemy(QGraphicsItem* parent): QObject(), QGraphicsRectItem(parent){
    //set random position x position
    int random_number = rand() % 700;
    setPos(random_number,0);

    // draw the rect
    setRect(0,0,100,100); //same size as the player

    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move(){
    // move enemy down
    setPos(x(),y()+ 5);
    //destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        //decrease the health
        game->health->decrease();

        scene()->removeItem(this);
        delete this;

    }


}
