#include "Health.h"
#include <QFont>


Health:: Health(QGraphicsTextItem* parent) : QGraphicsTextItem(parent){
    // iniatialize the score to zero
    health = 3;

    //draw the text
    setPlainText(QString("Health: ") + QString::number(health)); //Health : 3
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

    void Health::decrease(){
        health--;
        setPlainText(QString("Health: ") + QString::number(health)); // Health: 2
    }


int Health::getHealth(){
    return health;
}


