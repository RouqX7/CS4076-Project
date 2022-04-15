#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Enemy: public QObject, public   QGraphicsPixmapItem{
    Q_OBJECT
public:
    double health = 1;
    int spawn = 50;
    Enemy(double health,int spawn,QGraphicsItem* parent = 0);
    Enemy(const Enemy& self){}
   ~Enemy();
    //operator overload
    Enemy& operator=(const Enemy& self) {}
public slots:
    void move();
};

#endif // ENEMY_H
