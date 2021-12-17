#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"

using namespace std;

int main() {
  bool lunchRoom = true;
  bool playing = true;
  vector <Room*> vec;
  map<vector<Room*>, bool> northMap;
  map<vector<Room*>, bool> southMap;
  map<vector<Room*>, bool> westMap;
  map<vector<Room*>, bool> eastMap;
  Room* nRoom = new Room();
  cout << "Welcome to zuul" << endl;
  cout << "I am missing a few things could you get them for me?" << endl;
  cout << "No need to finnish your sentance thank you I need the plastic bag, the baby bag, the sharpie, some socks, and the vending machine bye bye" << endl;

  for (int t = 0; t < 15; t++) {
    //description = "This is the lunch room";
    strcpy(nRoom->description, " the lunch room it is odly quiet");
  }
  (vec).push_back(nRoom);
    
  while (playing == true) {
     vector<Room*>::iterator it;
     char input[10];
     for (int i = 0; i < vec.size(); i++) {
       cout << "You are in ";
       cout << vec[i]->description << endl;
       cout << "There is curretly this many items" << endl;
       cout << "There are exits:" << endl;
       vec[i]->auditorium();
       vec[i]->northExit();
       vec[i]->southExit();
       vec[i]->westExit();
       vec[i]->eastExit();
       
     }
     
     playing = false;
     cout << "Do you want to move(NORTH, SOUTH, WEST, EAST), pick up an item(PICK), drop and item(DROP), or quit the game (QUIT)" << endl;
     cout << " " << endl;
     cin >> input;

     if (strcmp(input, "NORTH") == 0) {
       
     }
     else if (strcmp(input, "SOUTH") == 0) {

     }
     else if (strcmp(input, "EAST") == 0) {

     }
     else if (strcmp(input, "WEST") == 0) {

     }
     else if (strcmp(input, "PICK") == 0) {

     }
     else if (strcmp(input, "DROP") == 0) {

     }
     else if (strcmp(input, "QUIT") == 0) {
       
     }
  }
  
  return 0;
}


