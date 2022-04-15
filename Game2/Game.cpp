#include "Game.h"
#include "Battle.h"
#include "ui_Game.h"//.h"
#include "Bullet.h"
#include "PowerUp.h"

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    player = new Player();
    player->bullet = new PowerUp(":/images/bulletlazer.jpg","",0.5);
    station = new Station(*player);

    updateLabel();
}

Game::~ Game()
{
    delete ui;
}
void Game::move(std::string direction){
    station->goRoom(direction);
    updateLabel();
    Enemy* enemy = station->currentRoom->EnemyinRoom;
    if(enemy!= nullptr){
       station->currentRoom->battle->show();
        station->currentRoom->setupEnemySpawn();
    }

}

void Game::on_pushButton_4_clicked()
{
    move("north");
}

void Game::updateLabel(){
    ui->label->setText(QString::fromStdString(station->currentRoom->longDescription()));

}

void Game::on_pushButton_2_clicked()
{
    move("east");
}


void Game::on_pushButton_5_clicked()
{
    move("south");
}


void Game::on_pushButton_clicked()
{
    move("west");
}

