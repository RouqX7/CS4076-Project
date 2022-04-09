#ifndef PLAYER_H
#define PLAYER_H

#include "Bullet.h"

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Player:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet* bullet;
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);

};

#endif // PLAYER_H
