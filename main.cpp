#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"
#include "Item.h"

using namespace std;
void getCurrentRoom();



int main() {
  bool playing = true;
  vector <Room*> vec;
  vector <Item*> inventory;
  map<char[10], Room*> northMap;
  map<vector<Room*>, bool> southMap;
  map<vector<Room*>, bool> westMap;
  map<vector<Room*>, bool> eastMap;
  //Room* nRoom = new Room();
  cout << "Welcome to zuul" << endl;
  cout << "I am missing a few things could you get them for me?" << endl;
  cout << "No need to finnish your sentance thank you I need the plastic bag, the baby bag, the sharpie, some socks, and the vending machine bye bye" << endl;

  Room* lunchRoom = new Room();
  strcpy(lunchRoom->des, "the lunch room it is very loud in here");
  lunchRoom->north = true;
  lunchRoom->south = true;
  lunchRoom->west = true;
  lunchRoom->east = true;
  vec.push_back(lunchRoom);
  Room* csRoom = new Room();
  strcpy(csRoom->des, "This is the CS room it is very computery in here");
  lunchRoom->north = true;
  lunchRoom->south = true;
  lunchRoom->west = true;
  lunchRoom->east = true;
  vec.push_back(csRoom);
  Room* audutorium = new Room();
  audutorium->north = true;
  audutorium->south = true;
  audutorium->west = true;
  audutorium->east = false;
  strcpy(audutorium->des, "the auditorium there is a play going on right now");
  vec.push_back(audutorium);
  Room* dramaRoom = new Room;
  dramaRoom->north = true;
  dramaRoom->south = false;
  dramaRoom->west = false;
  dramaRoom->east = false;
  strcpy(dramaRoom->des, "the drama room all the actors are sitting here");
  vec.push_back(dramaRoom);
  Room* artRoom = new Room();
  artRoom->north = true;
  artRoom->south = false;
  artRoom->west = false;
  artRoom->east = true;
  strcpy(artRoom->des, "the art room there is alot of art");
  vec.push_back(artRoom);
  Room* mathRoom = new Room();
  mathRoom->north = true;
  mathRoom->south = true;
  mathRoom->west = false;
  mathRoom->east = false;
  strcpy(mathRoom->des, "the math room there is a bunch of equations on the board");
  vec.push_back(mathRoom);
  Room* vault = new Room();
  vault->north = false;
  vault->south = true;
  vault->west = false;
  vault->east = false;
  strcpy(vault->des, "the vault so this is where all of the schools money is but you need a pascode");
  vec.push_back(vault);
  Room* courtyard = new Room();
  courtyard->north = false;
  courtyard->south = false;
  courtyard->west = false;
  courtyard->east = true;
  strcpy(courtyard->des, "the courtyard finaly a breath of fresh air outside");
  vec.push_back(courtyard);
  Room* abandonedRoom = new Room();
  abandonedRoom->north = true;
  abandonedRoom->south = true;
  abandonedRoom->west = false;
  abandonedRoom->east = false;
  strcpy(abandonedRoom->des, "the abandoned room it is very quiet in hear and alot of cobwebs!");
  vec.push_back(abandonedRoom);
  Room* dungeon = new Room();
  dungeon->north = false;
  dungeon->south = true;
  dungeon->west = false;
  dungeon->east = false;
  strcpy(dungeon->des, "the dungeon you didnt know your school had this but its very creepy");
  vec.push_back(dungeon);
  Room* gym = new Room();
  gym->north = true;
  gym->south = true;
  gym->west = true;
  gym->east = true;
  strcpy(gym->des, "the gym there is a huge game of dogeball going on");
  vec.push_back(gym);
  Room* balcony = new Room();
  balcony->north = false;
  balcony->south = true;
  balcony->west = false;
  balcony->east = false;
  strcpy(balcony->des, "the balcony wait why is there a balcony in the gym");
  vec.push_back(balcony);
  Room* library = new Room();
  library->north = true;
  library->south = false;
  library->east = false;
  library->west = false;
  strcpy(library->des, "the library youve never seen this many books");
  vec.push_back(library);
  Room* lockerRoom = new Room();
  lockerRoom->north = false;
  lockerRoom->east = true;
  lockerRoom->west = true;
  lockerRoom->south = false;
  strcpy(lockerRoom->des, "the locker room there sure is alot of lockers");
  vec.push_back(lockerRoom);
  Room* bathroom = new Room();
  bathroom->west = true;
  bathroom->east = false;
  bathroom->north = false;
  bathroom->south = false;
  strcpy(bathroom->des, "the bathroom it stinks");
  vec.push_back(bathroom);
  
  
  //Item* vendingMachine = new Item("Vending Machine");
  Item* babyBag = new Item();
  Item* sharpie = new Item();
  Item* socks = new Item();
  Item* plasticBag = new Item;

    //dungeon->hasVending = true;
  //vec.push_back(dungeon);

  //dungeon->setItem(*vendingMachine);
    
  bool start = true;

  bool inVen = false;
  bool inBaby = false;
  bool inPlastic = false;
  bool inSocks = false;
  bool inSharpie = false;
  
  Room* currentRoom = lunchRoom;
  
  
  
  while (playing == true) {
    cout << "Bye" << endl;
    char input[10];
     char description[100];
     if (start == true) {
       strcpy(description, "The lunch room it is very loud");
     }
     currentRoom->des;
     (vec).push_back(currentRoom);      
     for (int i = 0; i < vec.size(); i++) {
       cout << "You are in ";

       
       /*if (start == true) {
	 cout << description << endl;
	 vec[i]->lunchRoom();
	 start = false;
       }
       else {
	 cout << vec[i]->des << endl;
	 }*/
       cout << currentRoom->des << endl;
       cout << "Items:" << endl;
       //vec[i]->hasVending = false;
       
       if (vec[i]->hasVending == true) {
	 cout << "Vending Machine" << endl;
       }
       /*if (vec[i]->hasBaby == true) {
         cout << "Baby Bag" << endl;
       }
       if (vec[i]->hasPlastic == true) {
         cout << "Plastic Bag" << endl;
       }
       if (vec[i]->hasSocks == true) {
         cout << "Socks" << endl;
       }
       if (vec[i]->hasSharpie == true) {
         cout << "Sharpie" << endl;
	 }*/

       cout << "There are exits:" << endl;
       currentRoom->northExit();
       currentRoom->southExit();
       currentRoom->westExit();
       currentRoom->eastExit();
       
     
     
     //playing = false;
       cout << "Do you want to move(NORTH, SOUTH, WEST, EAST), pick up an item(PICK), drop and item(DROP), or quit the game (QUIT)" << endl;
       cout << " " << endl;
       cin >> input;
       

       if (strcmp(input, "NORTH") == 0) {
	 if (currentRoom == lunchRoom) {
	   currentRoom = abandonedRoom;
	 }
	 else if (currentRoom == gym) {
           currentRoom = balcony;
         }
         else if (currentRoom == abandonedRoom) {
           currentRoom = dungeon;
         }
         else if (currentRoom == audutorium) {
           currentRoom = lunchRoom;
         
         }
         else if (currentRoom == csRoom) {
           currentRoom = vault;
         
         }
         else if (currentRoom == dramaRoom) {
           currentRoom = audutorium;
         
         }
	 else if (currentRoom == mathRoom) {
           currentRoom = csRoom;
         
         }
         else if (currentRoom == artRoom) {
           currentRoom = mathRoom;
         
         }
	 else if (currentRoom == library) {
           currentRoom = gym;
         
         }
	 
       }
       else if (strcmp(input, "SOUTH") == 0) {
	 if (currentRoom == abandonedRoom) {
           currentRoom = lunchRoom;
         
         }
         else if (currentRoom == balcony) {
           currentRoom = gym;
         
         }
         else if (currentRoom == dungeon) {
           currentRoom = abandonedRoom;
         
         }
         else if (currentRoom == lunchRoom) {
           currentRoom = audutorium;
         
         }
         else if (currentRoom == vault) {
           currentRoom = csRoom;
         
         }
         else if (currentRoom == audutorium) {
           currentRoom = dramaRoom;
         
         }
         else if (currentRoom == csRoom) {
           currentRoom = mathRoom;
         
         }
         else if (currentRoom == mathRoom) {
           currentRoom = artRoom;
         
         }
         else if (currentRoom == gym) {
           currentRoom = library;
         
         }
	 playing = true;

       }
       else if (strcmp(input, "EAST") == 0) {
	 if (currentRoom == csRoom) {
           currentRoom = lunchRoom;
         

         }
         else if (currentRoom == lunchRoom) {
           currentRoom = gym;
         
         }
         else if (currentRoom == gym) {
           currentRoom = lockerRoom;
         
         }
         else if (currentRoom == lockerRoom) {
           currentRoom = bathroom;
         
         }
          else if (currentRoom == courtyard) {
           currentRoom = csRoom;
         
         }
         else if (currentRoom == artRoom) {
           currentRoom = audutorium;
         
         }
	 
       }
       else if (strcmp(input, "WEST") == 0) {
	 if (currentRoom == lunchRoom) {
	   currentRoom = csRoom;
	 
	 
	 }
	 else if (currentRoom == gym) {
	   currentRoom = lunchRoom;
	 
	 }
	 else if (currentRoom == lockerRoom) {
	   currentRoom = gym;
	 
	 }
	 else if (currentRoom == bathroom) {
	   currentRoom = lockerRoom;
	 
	 }
	  else if (currentRoom == csRoom) {
           currentRoom = courtyard;
         
         }
         else if (currentRoom == audutorium) {
           currentRoom = artRoom;
         
         }
	 playing = true;

       }
      
       else if (strcmp(input, "PICK") == 0) {
	 char temp[10];
	 cout << "What item would you like to pick up Vending Machine(V), Socks(SO), Baby bag(B), Plastic Bag(P), Sharipe(SH)" << endl;
	 cin >> temp;
	 if (vec[i]->hasVending == true && strcmp(temp, "V") == 0) {
	   vec[i]->hasVending = false;
	   inVen = true;
	   cout << "Item picked up" << endl;
	 }
       }
       else if (strcmp(input, "DROP") == 0) {
	 
       }
       else if (strcmp(input, "QUIT") == 0) {
	 playing = false;
       }
       cout << vec.size() << endl;
       //vec.erase(vec.begin()+1, vec.end());
     }
  }
  
  return 0;
}

void getCurrentRoom(vector <Room*> v) {
 
}
