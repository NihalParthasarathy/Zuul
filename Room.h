#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

class Room {
 public:
  char* getDescription();
  void northExit();
  void southExit();
  void westExit();
  void eastExit();
  void setItems();
  void currentRoom();
  void setExit();

  void lunchRoom();
  void abandonedRoom();
  void dungeon();
  void csRoom();
  void vault();
  void courtyard();
  void mathRoom();
  void artRoom();
  void auditorium();
  void dramaRoom();
  void gym();
  void balcony();
  void library();
  void lockerRoom();
  void bathroom();

  void printItems();
  
  int mapNumber;
  bool north;
  bool south;
  bool west;
  bool east;
  char description[100];
  bool itemTrue;
  bool lunchTrue;

  bool traveledDungeon;
  /*bool babyBag = false;
  bool socks = false;
  bool sharpie = false;
  bool plasticBag = false;
  bool vendingMachine = false;*/

  bool hasSharpie;
  bool hasPlastic;
  bool hasBaby;
  bool hasVending;
  bool hasSocks;

  int i = 0;
  char des[100];
  
 private:
  char str[100];

};

#endif
