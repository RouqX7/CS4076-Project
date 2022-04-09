#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem{
public:
    Health(QGraphicsTextItem* parent = 0);
    void decrease();
    int getHealth();
public:
    int health;
};

#endif // HEALTH_H
