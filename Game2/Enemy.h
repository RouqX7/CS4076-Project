#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public   QGraphicsRectItem{
    Q_OBJECT
public:
    double health;
    int spawn;
    Enemy(double health,int spawn,QGraphicsItem* parent = 0);
public slots:
    void move();
};

#endif // ENEMY_H
