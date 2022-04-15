#ifndef BULLET_H
#define BULLET_H


#include "item.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class Bullet: public QObject,public QGraphicsPixmapItem,public Item{
    Q_OBJECT
public:
    int dmg = 0;

    Bullet(string img,string desc,int dmg,QGraphicsItem * parent = 0);
    void fire();
    QTimer * timer;
public slots:
    void move();
};

#endif // BULLET_H
