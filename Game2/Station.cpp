#include "Station.h"
#include "PowerUp.h"
#include "qdebug.h"

Station::Station()
{
    qDebug()<<"your nan5";
    this->story.insert(pair<string,string>("x","Welcome to Stargate Station, you are a promising lietuenant rising up the ranks"));
    this->story.insert(pair<string,string>("a","You're ready to get geared up with a new LazerBeam"));
    this->story.insert(pair<string,string>("b","New PowerUp rayGun"));
    this->story.insert(pair<string,string>("c","You are on the front lines lietuenant, this is your chanxce to prove your worth!"));
    this->story.insert(pair<string,string>("d","We are now progressing onto your 2nd fight are you ready for what's ahead"));
    this->story.insert(pair<string,string>("e","A new PowerUp you are now becoming Stargate's strongest warrior."));
    this->story.insert(pair<string,string>("f","This is your final mission, You have conquered all the missions it is time to finally win this war."));


    createRooms();
}
template<typename T>
void Station:: spawnItems(vector<T> &items){
    PowerUp* lazerBeam = new PowerUp("","",0.5);
    PowerUp* rayGun = new PowerUp("","",0.5);
    PowerUp* machineGun = new PowerUp("","",0.5);
    PowerUp* iceRay = new PowerUp("","",0.5);
    PowerUp* volcanicEruptor = new PowerUp("","",0.5);
    PowerUp* deathRay = new PowerUp("","",0.5);
    items.push_back(lazerBeam);
    items.push_back(rayGun);
    items.push_back(machineGun);
    items.push_back(iceRay);
    items.push_back(volcanicEruptor);
    items.push_back(deathRay);




}

void Station:: createRooms(){
    Enemy* enemy = new Enemy(1,10);
    Enemy* enemy2 = new Enemy(1.2,15);
    Enemy* enemy3 = new Enemy(1.5,20);

    qDebug()<<"your nan";
    vector<Item*> items;
    spawnItems(items);
    x = new Room("x",this->story["x"]);
    x->addItem(items[0]);
qDebug()<<"your nan";
    a= new Room("a",this->story["a"]);
    a->addItem(items[1]);
qDebug()<<"your nan2";
    b = new Room("b",this->story["b"]);
    b->addItem(items[2]);

    c = new Room("c",this->story["c"]);
    qDebug()<<"your nan3";
    c->EnemyinRoom = enemy;
    qDebug()<<"your nan4";


    d = new Room("d",this->story["d"]);
    d->addItem(items[4]);
   d->EnemyinRoom = enemy2;

    e  = new Room("e",this->story["e"]);
    qDebug()<<"your nan5";
    f  = new Room("f",this->story["f"]);
    f->EnemyinRoom = enemy3;

    x->setExits(d,c,b,a);

    a->setExits(nullptr,x,nullptr,nullptr);
    b->setExits(x,nullptr,nullptr,nullptr);
    c->setExits(nullptr,nullptr,nullptr,x);
    d->setExits(e,nullptr,x,nullptr);
    e->setExits(nullptr,f,d,nullptr);
    f->setExits(nullptr,nullptr,nullptr,e);


    this->currentRoom = x;


}
void Station::goRoom(const string& direction){
    Room* nextRoom = currentRoom->nextRoom(direction);
    if(nextRoom!=nullptr)currentRoom = nextRoom;
    qDebug()<<QString::fromStdString(currentRoom->id);

}

