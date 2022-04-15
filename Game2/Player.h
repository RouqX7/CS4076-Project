#ifndef PLAYER_H
#define PLAYER_H

#include "Bullet.h"

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>



class Player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet* bullet = nullptr;
    explicit Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);

};

#endif // PLAYER_H
