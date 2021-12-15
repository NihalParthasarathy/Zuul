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
  map<vector<Room*>, string> northMap;
  map<vector<Room*>, string> southMap;
  map<vector<Room*>, string> westMap;
  map<vector<Room*>, string> eastMap;
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
     for (int i = 0; i < vec.size(); i++) {
       cout << "You are in ";
       cout << vec[i]->description << endl;
       cout << "There is curretly this many items" << endl;
       playing = false;
     }
     
  }
  
  return 0;
}


