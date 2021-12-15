#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"

using namespace std;

int main() { 
  bool playing = true;
  vector <Room*> vec;
  map<vector<Room*>, string> northMap;
  map<vector<Room*>, string> southMap;
  map<vector<Room*>, string> westMap;
  map<vector<Room*>, string> eastMap;
  Room* nRoom = new Room();
  cout << "Welcome to zuul" << endl;
  cout << "I am missing a few things could you get them for me?" << endl;
  cout << "No need to finnish your sentance thank you I need the plastic bag, the baby bag, the sharpie, some socks, and the vending machine"
    
  while (playing == true) {
    vector<Room*>::iterator it;
    for (it = vec.begin(); it < vec.end(); it++) {
      cout << "You are currently in " << 
    }
  }
  
  return 0;
}
