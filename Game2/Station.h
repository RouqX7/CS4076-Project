#ifndef STATION_H
#define STATION_H
#include "Room.h"


class Station
{
private:
   Room *x,*a,*b,*c,*d,*e,*f;
   void createRooms();
   map<string,string>story;

public:
      void goRoom(const string& direction);
      template<typename T>
      void spawnItems(vector<T>&);
      explicit Station();
      Room *currentRoom;
};


#endif // STATION_H
