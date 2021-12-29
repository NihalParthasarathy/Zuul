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
  strcpy(des, "the lunch room it is very lound in here");
  
}
void Room::abandonedRoom() {
  north = true;
  south = true;
  west = false;
  east = false;
  strcpy(des, "the abandoned room it is very quiet in hear and alot of cobwebs!");
}
void Room::dungeon() {
  north = false;
  south = true;
  west = false;
  east = false;
  strcpy(des, "the dungeon you didnt know your school had this but its very creepy");
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
  strcpy(des, "the vault so this is where all of the schools money is but you need a pascode");
}
void Room::courtyard() {
  north = false;
  south = false;
  west = false;
  east = true;
  strcpy(des, "the courtyard finaly a breath of fresh air outside");
}
void Room::mathRoom() {
  north = true;
  south = true;
  east = false;
  west = false;
  strcpy(des, "the math room there is a bunch of equations on the board");
}
void Room::artRoom() {
  north = true;
  east = true;
  west = false;
  south = false;
  strcpy(des, "the art room there is alot of art");
}
void Room::auditorium() {
  north = true;
  south = true;
  west = true;
  east = false;
  strcpy(des, "the auditorium there is a play going on right now");
}
void Room::dramaRoom() {
  north = true;
  south = false;
  east = false;
  west = false;
  strcpy(des, "the drama room all the actors are sitting here");
}
void Room::gym() {
  north = true;
  south = true;
  west = true;
  east = true;
  strcpy(des, "the gym there is a huge game of dogeball going on");
}
void Room::balcony() {
  north = false;
  south = true;
  west = false;
  east = false;
  strcpy(des, "the balcony wait why is there a balcony in the gym");
}
void Room::library() {
  north = true;
  south = false;
  east = false;
  west = false;
  strcpy(des, "the library youve never seen this many books");
}
void Room::lockerRoom() {
  north = false;
  east = true;
  west = true;
  south = false;
  strcpy(des, "the locker room there sure is alot of lockers");
}
void Room::bathroom() {
  west = true;
  east = false;
  north = false;
  south = false;
  strcpy(des, "the bathroom it stinks");
}

