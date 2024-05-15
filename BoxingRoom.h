#ifndef BOXINGROOM_H_
#define BOXINGROOM_H_

#include "Room.h"
#include "Player.h"
#include "StartFinish.h"

class BoxingRoom : public Room,  public StartFinish {

public:
    BoxingRoom(string description, Player& player); // Add ZorkUL& game as a parameter

    string awardDescription(Room* currentRoom, int location); // Remove 'override'
    Room* nextRoom(string direction); // Remove 'override'

};

#endif // BOXINGROOM_H_
