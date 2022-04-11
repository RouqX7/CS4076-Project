#ifndef BULLET_H
#define BULLET_H

#include "item.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Bullet: public QObject,public QGraphicsPixmapItem,public Item{
    Q_OBJECT
public:

    Bullet(string img,string desc,QGraphicsItem * parent = 0);
public slots:
    void move();
};

#endif // BULLET_H
