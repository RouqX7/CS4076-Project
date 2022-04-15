#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemy.h"
#include <QBrush>
#include <QImage>

/*
Issue was we needed to trigger the spawn after the battle scene has been created.
*/
Battle::Battle(Player& player, QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600); // make the scene 800x600 instead of infinity by infinity (default)
      setBackgroundBrush(QBrush(QImage(":/images/SpaceBackGround.jpg")));

    // make the newly created scene the scene to visualize (since Game is a QGraphicsView Widget,
    // it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    // create the player
    this->player = new Player();
    // change the rect from 0x0 (default) to 100x100 pixels
    this->player->setPos(400,500); // TODO generalize to always be in the middle bottom of screen
    // make the player focusable and set it to be the current focus
    this->player->setFlag(QGraphicsItem::ItemIsFocusable);
    this->player->setFocus();
    // add the player to the scene
    scene->addItem(this->player);

    // create the score/health
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(),health->y()+25);
    scene->addItem(health);
    qDebug()<<"Enemy SPAWned";

    //show();
}
