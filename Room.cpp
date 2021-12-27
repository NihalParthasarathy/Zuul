#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"

using namespace std;


char* Room::setRoom() {
  return description;
}

void Room::setExit() {
  if (west == true) {
    
  }
}

void Room::northExit() {
  if (north == true) {
    cout << "NORTH" << endl;
  }
}
void Room::southExit() {
  if (south == true) {
    cout << "SOUTH" << endl;
  }
}
void Room::westExit() {
  if (west == true) {
    cout << "WEST" << endl;
  }
}
void Room::eastExit() {
  if (east == true) {
    cout << "EAST" << endl;
  }
}

void Room::currentRoom() {

}

void Room::lunchRoom() {
  north = true;
  south = true;
  west = true;
  east = true;
  strcpy(des, "This is the lunch room it is very lound");
  
}
void Room::abandonedRoom() {
  north = true;
  south = true;
  west = false;
  east = false;
}
void Room::dungeon() {
  north = false;
  south = true;
  west = false;
  east = false;
}
void Room::csRoom() {
  north = true;
  south = true;
  west = true;
  east = true;
  strcpy(des, "This is the CS room it is very computery in here");
}
void Room::vault() {
  north = false;
  south = true;
  west = false;
  east = false;
}
void Room::courtyard() {
  north = false;
  south = false;
  west = false;
  east = true;
}
void Room::mathRoom() {
  north = true;
  south = true;
  east = false;
  west = false;
}
void Room::artRoom() {
  north = true;
  east = true;
  west = false;
  south = false;
}
void Room::auditorium() {
  north = true;
  south = true;
  west = true;
  east = false;
}
void Room::dramaRoom() {
  north = true;
  south = false;
  east = false;
  west = false;
}
void Room::gym() {
  north = true;
  south = true;
  west = true;
  east = true;
}
void Room::balcony() {
  north = false;
  south = true;
  west = false;
  east = false;
}
void Room::library() {
  north = true;
  south = false;
  east = false;
  west = false;
}
void Room::lockerRoom() {
  north = false;
  east = true;
  west = true;
  south = false;
}
void Room::bathroom() {
  west = true;
  east = false;
  north = false;
  south = false;
}

