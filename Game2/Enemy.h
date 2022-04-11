#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public   QGraphicsPixmapItem{
    Q_OBJECT
public:
    double health;
    int spawn;
    Enemy(double health,int spawn,QGraphicsItem* parent = 0);
   ~Enemy();
public slots:
    void move();
};

#endif // ENEMY_H
