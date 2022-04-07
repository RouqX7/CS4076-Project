#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsItem{
public:
    Score(QGraphicsItem* parent = 0);
    void increase();
    int getScore();
public:
    int score;
};


#endif // SCORE_H
