#include <QApplication>
#include "Game.h"
#include "Battle.h"
#include "mainwindow.h"

Game *game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    MainWindow W;
    W.show();
    return a.exec();
}
