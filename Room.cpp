//Nihal Parthasarathy
//12/30/2021
//This program plays a console based game called Zuul where your goal is the move through rooms and pick up all the items and take them to the balcony

//Includes
#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"

using namespace std;

char* Room::getDescription() {//Returns description
  return des;
}

void Room::northExit() {//Sees if north is true and prints if it is
  if (north == true) {
    cout << "NORTH" << endl;
  }
}
void Room::southExit() {//Sees if south is true and prints if it is
  if (south == true) {
    cout << "SOUTH" << endl;
  }
}
void Room::westExit() {//Sees if west is true and prints if it is
  if (west == true) {
    cout << "WEST" << endl;
  }
}
void Room::eastExit() {//Sees if east is true and prints if it is
  if (east == true) {
    cout << "EAST" << endl;
  }
}

