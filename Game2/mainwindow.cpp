#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Game.h"
#include "ui_Game.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    hide();
    Game* g = new Game(this);
    g->show();
}

