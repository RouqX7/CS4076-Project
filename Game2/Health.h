#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>

class Health: public QGraphicsItem{
public:
    Health(QGraphicsItem* parent = 0);
    void decrease();
    int getHealth();
public:
    int health;
};

#endif // HEALTH_H
