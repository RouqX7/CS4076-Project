#ifndef DIALOG_H
#define DIALOG_H

#include "Player.h"
#include "Station.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Game : public QDialog
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();
    void move(std::string direction);
    Player* player;
    Station* station;
    void updateLabel();
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
