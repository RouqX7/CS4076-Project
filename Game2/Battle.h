#ifndef BATTLE_H
#define BATTLE_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Enemy.h"
#include "Player.h"
#include "Score.h"
#include "Health.h"
#include "Room.h"

class Battle: public QGraphicsView{
    Q_OBJECT
public:
    Battle( Room* room, QWidget* parent=0 );

    QGraphicsScene * scene;
    Player * player;
    Enemy* enemy;
    Score * score;
    Health * health;
    Room* room;

};

#endif // BATTLE_H
