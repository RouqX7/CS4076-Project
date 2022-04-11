#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "Enemy.h"
#include "Battle.h"

extern Battle * game; // there is an external global object called game

Bullet::Bullet(string img, string desc,QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent),Item(img,desc){
    // drew the graphics
    setPixmap(QPixmap(":/images/bulletlazer.jpg"));

    // connect
    QTimer * timer = new QTimer(this);
    //connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Bullet::move(){
    //get a list of all the items currently colliding with this bullet
    QList<QGraphicsItem *>colliding_items = collidingItems();

    //if one of the colliding items is an Enemy, destroy both the bullet and the Enemy
    for(int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(Enemy)){ //dereference pointer
            //increase the score

            game->score->increase();

            //remove them both from the scene(still on the heap)
              Enemy* en = dynamic_cast<Enemy*>(colliding_items[i]);
              en->health -= this->value;
              if(en->health <= 0){
                   scene()->removeItem(colliding_items[i]);
              }
            scene()->removeItem(this);
            //delete them both off the heap to save memory

            if(en->health <= 0){
                   delete colliding_items[i];
            }


            delete this;
            return;

        }

    }

    qDebug()<<"debug";
    // move bullet up
    setPos(x(),y()-10);
     // if the bullet is off the screen, destroy it
    if (pos().y() < 0){
        scene()->removeItem(this);
        delete this;

    }

}
