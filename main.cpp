#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"

using namespace std;
void getCurrentRoom();

int main() {
  bool playing = true;
  vector <Room*> vec;
  map<char[10], Room*> northMap;
  map<vector<Room*>, bool> southMap;
  map<vector<Room*>, bool> westMap;
  map<vector<Room*>, bool> eastMap;
  //Room* nRoom = new Room();
  cout << "Welcome to zuul" << endl;
  cout << "I am missing a few things could you get them for me?" << endl;
  cout << "No need to finnish your sentance thank you I need the plastic bag, the baby bag, the sharpie, some socks, and the vending machine bye bye" << endl;

  Room* lunchRoom = new Room();
  Room* csRoom = new Room();
  Room* audutorium = new Room();
  Room* dramaRoom = new Room();
  Room* artRoom = new Room();
  Room* mathRoom = new Room();
  Room* vault = new Room();
  Room* courtyard = new Room();
  Room* abandonedRoom = new Room();
  Room* dungeon = new Room();
  Room* gym = new Room();
  Room* balcony = new Room();
  Room* library = new Room();
  Room* lockerRoom = new Room();
  Room* bathroom = new Room();

  bool start = true;

  //lunchRoom->setExit("west", csRoom);
  
  Room* currentRoom = lunchRoom;

  
  /*for (int t = 0; t < 15; t++) {
    description = "This is the lunch room";
    strcpy(nRoom->description, " the lunch room it is odly quiet");
  }
  (vec).push_back(nRoom);*/
  while (playing == true) {
    cout << "Bye" << endl;
    //vector<Room*>::iterator it;
     char input[10];
     char description[100];
     if (start == true) {
       strcpy(description, "This is the lunch room");
     }
     currentRoom->des;
     (vec).push_back(currentRoom);      
     for (int i = 0; i < vec.size(); i++) {
       cout << "You are in ";

       /*strcpy(currentRoom->description, vec[i]->des);
	 (vec).push_back(currentRoom);*/

       
       //      currentRoom = currentRoom->getExit("west");
       if (start == true) {
	 cout << description << endl;
	 vec[i]->lunchRoom();
	 start = false;
       }
       else {
	 cout << vec[i]->des << endl;
       }
       cout << "There is a " << endl;
       cout << "There are exits:" << endl;
       vec[i]->northExit();
       vec[i]->southExit();
       vec[i]->westExit();
       vec[i]->eastExit();
       
     
     
     //playing = false;
       cout << "Do you want to move(NORTH, SOUTH, WEST, EAST), pick up an item(PICK), drop and item(DROP), or quit the game (QUIT)" << endl;
       cout << " " << endl;
       cin >> input;
       

       if (strcmp(input, "NORTH") == 0) {
	 if (currentRoom == lunchRoom) {
	   currentRoom = abandonedRoom;
	   vec[i]->abandonedRoom();
	 }
	 else if (currentRoom == gym) {
           currentRoom = balcony;
           vec[i]->balcony();
         }
         else if (currentRoom == abandonedRoom) {
           currentRoom = dungeon;
           vec[i]->dungeon();
         }
         else if (currentRoom == audutorium) {
           currentRoom = lunchRoom;
           vec[i]->lunchRoom();
         }
         else if (currentRoom == csRoom) {
           currentRoom = vault;
           vec[i]->vault();
         }
         else if (currentRoom == dramaRoom) {
           currentRoom = audutorium;
           vec[i]->auditorium();
         }
	 else if (currentRoom == mathRoom) {
           currentRoom = csRoom;
           vec[i]->csRoom();
         }
         else if (currentRoom == artRoom) {
           currentRoom = mathRoom;
           vec[i]->mathRoom();
         }
	 else if (currentRoom == library) {
           currentRoom = gym;
           vec[i]->gym();
         }
       }
       else if (strcmp(input, "SOUTH") == 0) {
	 if (currentRoom == abandonedRoom) {
           currentRoom = lunchRoom;
           vec[i]->lunchRoom();
         }
         else if (currentRoom == balcony) {
           currentRoom = gym;
           vec[i]->gym();
         }
         else if (currentRoom == dungeon) {
           currentRoom = abandonedRoom;
           vec[i]->abandonedRoom();
         }
         else if (currentRoom == lunchRoom) {
           currentRoom = audutorium;
           vec[i]->auditorium();
         }
         else if (currentRoom == vault) {
           currentRoom = csRoom;
           vec[i]->csRoom();
         }
         else if (currentRoom == audutorium) {
           currentRoom = dramaRoom;
           vec[i]->dramaRoom();
         }
         else if (currentRoom == csRoom) {
           currentRoom = mathRoom;
           vec[i]->mathRoom();
         }
         else if (currentRoom == mathRoom) {
           currentRoom = artRoom;
           vec[i]->artRoom();
         }
         else if (currentRoom == gym) {
           currentRoom = library;
           vec[i]->library();
         }

       }
       else if (strcmp(input, "EAST") == 0) {
	 if (currentRoom == csRoom) {
           currentRoom = lunchRoom;
           vec[i]->lunchRoom();

         }
         else if (currentRoom == lunchRoom) {
           currentRoom = gym;
           vec[i]->gym();
         }
         else if (currentRoom == gym) {
           currentRoom = lockerRoom;
           vec[i]->lockerRoom();
         }
         else if (currentRoom == lockerRoom) {
           currentRoom = bathroom;
           vec[i]->bathroom();
         }
          else if (currentRoom == courtyard) {
           currentRoom = csRoom;
           vec[i]->csRoom();
         }
         else if (currentRoom == artRoom) {
           currentRoom = audutorium;
           vec[i]->auditorium();
         }
       }
       else if (strcmp(input, "WEST") == 0) {
	 if (currentRoom == lunchRoom) {
	   currentRoom = csRoom;
	   vec[i]->csRoom();
	 
	 }
	 else if (currentRoom == gym) {
	   currentRoom = lunchRoom;
	   vec[i]->lunchRoom();
	 }
	 else if (currentRoom == lockerRoom) {
	   currentRoom = gym;
	   vec[i]->gym();
	 }
	 else if (currentRoom == bathroom) {
	   currentRoom = lockerRoom;
	   vec[i]->lockerRoom();
	 }
	  else if (currentRoom == csRoom) {
           currentRoom = courtyard;
           vec[i]->courtyard();
         }
         else if (currentRoom == audutorium) {
           currentRoom = artRoom;
           vec[i]->artRoom();
         }

       }
      
       else if (strcmp(input, "PICK") == 0) {
	 
       }
       else if (strcmp(input, "DROP") == 0) {
	 
       }
       else if (strcmp(input, "QUIT") == 0) {
	 playing = false;
       }
     }
  }
  
  return 0;
}

void getCurrentRoom(vector <Room*> v) {
 
}
