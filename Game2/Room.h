#ifndef ROOM_H_
#define ROOM_H_


#include <map>
#include <string>
#include <vector>
#include "item.h"
#include "Actor.h"
#include "Enemy.h"
#include "Battle.h"

using namespace std;
using std::vector;

class Room : public QObject,public QGraphicsRectItem{
Q_OBJECT
private:

    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;


public:
    int numberOfItems();
     string description; string id;
    Room(string id, string description, QGraphicsItem * parent=0);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    string shortDescription();
    string longDescription();
    Room* nextRoom(string direction);
    Enemy* EnemyinRoom = nullptr;
    Battle* battle = nullptr;
    void addItem(Item *inItem);
    void addActor(Actor *InActor);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);

public slots: void spawnEnemy();
};

#endif
