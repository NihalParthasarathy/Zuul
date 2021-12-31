//heder gaurd
#ifndef ITEM_H
#define ITEM_H

//inclusions
#include <iostream>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

class Room {
 public:

  //Functions
  char* getDescription();
  void northExit();
  void southExit();
  void westExit();
  void eastExit();

  //Initilizes varubles
  int mapNumber;
  bool north;
  bool south;
  bool west;
  bool east;
  char description[100];
 
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
