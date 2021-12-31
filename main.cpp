//Nihal Parthasarathy
//12/30/2021
//This program plays a console based game called Zuul where your goal is the move through rooms and pick up all the items and take them to the balcony
//Help from Ehan Masud

//Includes
#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include "Room.h"
#include "Item.h"

using namespace std;



int main() {
  
  bool playing = true;
  //Vectors
  vector <Room*> vec;
  vector <Item*> inventory;

  //Welcomes
  cout << "Welcome to zuul" << endl;
  cout << "I am missing a few things could you get them for me?" << endl;
  cout << "No need to finnish your sentance thank you I need the plastic bag, the baby bag, the sharpie, some socks, and the vending machine I will be waiting for you in the balcony so come there bye bye" << endl;

  //Declaring all the Rooms with their exits and items
  
  //Lunch Room
  Room* lunchRoom = new Room();
  strcpy(lunchRoom->des, "the lunch room it is very loud in here");
  lunchRoom->north = true;
  lunchRoom->south = true;
  lunchRoom->west = true;
  lunchRoom->east = true;
  vec.push_back(lunchRoom);
  //CS room
  Room* csRoom = new Room();
  strcpy(csRoom->des, "the CS room it is very computery in here");
  lunchRoom->north = true;
  lunchRoom->south = true;
  lunchRoom->west = true;
  lunchRoom->east = true;
  vec.push_back(csRoom);
  //Audutorium
  Room* audutorium = new Room();
  audutorium->north = true;
  audutorium->south = true;
  audutorium->west = true;
  audutorium->east = false;
  strcpy(audutorium->des, "the auditorium there is a play going on right now");
  audutorium->hasBaby = true;
  vec.push_back(audutorium);
  //Drama Room
  Room* dramaRoom = new Room;
  dramaRoom->north = true;
  dramaRoom->south = false;
  dramaRoom->west = false;
  dramaRoom->east = false;
  strcpy(dramaRoom->des, "the drama room all the actors are sitting here");
  vec.push_back(dramaRoom);
  //Art Room
  Room* artRoom = new Room();
  artRoom->north = true;
  artRoom->south = false;
  artRoom->west = false;
  artRoom->east = true;
  strcpy(artRoom->des, "the art room there is alot of art");
  vec.push_back(artRoom);
  //Math Room
  Room* mathRoom = new Room();
  mathRoom->north = true;
  mathRoom->south = true;
  mathRoom->west = false;
  mathRoom->east = false;
  strcpy(mathRoom->des, "the math room there is a bunch of equations on the board");
  vec.push_back(mathRoom);
  //Vault Room
  Room* vault = new Room();
  vault->north = false;
  vault->south = true;
  vault->west = false;
  vault->east = false;
  strcpy(vault->des, "the vault so this is where all of the schools money is but you need a pascode");
  vault->hasSharpie = true;
  vec.push_back(vault);
  //Courtyard
  Room* courtyard = new Room();
  courtyard->north = false;
  courtyard->south = false;
  courtyard->west = false;
  courtyard->east = true;
  strcpy(courtyard->des, "the courtyard finaly a breath of fresh air outside");
  courtyard->hasPlastic = true;
  vec.push_back(courtyard);
  //Abandoned Rooms
  Room* abandonedRoom = new Room();
  abandonedRoom->north = true;
  abandonedRoom->south = true;
  abandonedRoom->west = false;
  abandonedRoom->east = false;
  strcpy(abandonedRoom->des, "the abandoned room it is very quiet in hear and alot of cobwebs!");
  vec.push_back(abandonedRoom);
  //Dungeon
  Room* dungeon = new Room();
  dungeon->north = false;
  dungeon->south = true;
  dungeon->west = false;
  dungeon->east = false;
  strcpy(dungeon->des, "the dungeon you didnt know your school had this but its very creepy");
  dungeon->hasVending = true;
  vec.push_back(dungeon);
  //Gym
  Room* gym = new Room();
  gym->north = true;
  gym->south = true;
  gym->west = true;
  gym->east = true;
  strcpy(gym->des, "the gym there is a huge game of dogeball going on");
  vec.push_back(gym);
  //Balcony
  Room* balcony = new Room();
  balcony->north = false;
  balcony->south = true;
  balcony->west = false;
  balcony->east = false;
  strcpy(balcony->des, "the balcony wait why is there a balcony in the gym");
  vec.push_back(balcony);
  //Library
  Room* library = new Room();
  library->north = true;
  library->south = false;
  library->east = false;
  library->west = false;
  strcpy(library->des, "the library youve never seen this many books");
  vec.push_back(library);
  //Locker Room
  Room* lockerRoom = new Room();
  lockerRoom->north = false;
  lockerRoom->east = true;
  lockerRoom->west = true;
  lockerRoom->south = false;
  strcpy(lockerRoom->des, "the locker room there sure is alot of lockers");
  lockerRoom->hasSocks = true;
  vec.push_back(lockerRoom);
  //Bathroom
  Room* bathroom = new Room();
  bathroom->west = true;
  bathroom->east = false;
  bathroom->north = false;
  bathroom->south = false;
  strcpy(bathroom->des, "the bathroom it stinks");
  vec.push_back(bathroom);
  
  //Sets current room
  Room* currentRoom = lunchRoom;

  Item* inv = new Item();
  
  while (playing == true) {
    char input[10];
    char description[100];
    currentRoom->des; //Sets descriptions
    (vec).push_back(currentRoom);      
    for (int i = 0; i < vec.size(); i++) {
      cout << "You are in ";
      //Prints descriptions
      cout << currentRoom->des << endl;
      
      cout << "Items:" << endl;
      
      if (currentRoom->hasVending == true) {//Checks to see if vending machine is in the room
	cout << "Vending Machine" << endl;
      }
      if (currentRoom->hasBaby == true) {//Checks to see if baby bag in the room
	cout << "Baby Bag" << endl;
      }
      if (currentRoom->hasPlastic == true) {//Checks to see if plastic bag in room
	cout << "Plastic Bag" << endl;
      }
      if (currentRoom->hasSocks == true) {//Checks to see if socks are in room
	cout << "Socks" << endl;
       }
      if (currentRoom->hasSharpie == true) {//Cheks to see if sharpie is in the room
	cout << "Sharpie" << endl;
      }
      
      cout << "There are exits:" << endl;
      //Prints the exits
      currentRoom->northExit();
      currentRoom->southExit();
      currentRoom->westExit();
      currentRoom->eastExit();
      
      if (currentRoom == csRoom) {//Prints CS exits because for some reason I had a bug i couldnt fix where that specific rooms exits werent printing
	cout << "NORTH" << endl;
	cout << "SOUTH" << endl;
	cout << "WEST" << endl;
	cout << "EAST" << endl;
      }
      
      cout << "Do you want to move(NORTH, SOUTH, WEST, EAST), pick up an item(PICK), drop and item(DROP), or quit the game (QUIT)" << endl;
      cout << " " << endl;
      cin >> input;
      //Asks the user what they want to do

      if (strcmp(input, "NORTH") == 0) {//Sets the current room to the specfic exit if user typed north
	if (currentRoom == lunchRoom) {//If current room is lunch room current room is now abandoned room
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
      else if (strcmp(input, "SOUTH") == 0) {//Sets the current room to the specfic exit if user typed south
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
      else if (strcmp(input, "EAST") == 0) {//Sets the current room to the specfic exit if user typed east
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
      else if (strcmp(input, "WEST") == 0) {//Sets the current room to the specfic exit if user typed west
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
	 //Asks what the user would like to pick up
	 char temp[10];
	 cout << "What item would you like to pick up Vending Machine(V), Socks(SO), Baby bag(B), Plastic Bag(P), Sharipe(SH)" << endl;
	 cin >> temp;
	 
	 //Chcks to see if the room has the item wanted to pick up
	 if (currentRoom->hasVending == true && strcmp(temp, "V") == 0) {//Picks up Vending Machine
	   currentRoom->hasVending = false;//Remove vending machine from room
	   inv->vendingInventory = true;//Puts vending machine in inventory
	   cout << "Item picked up" << endl;
	 }
	 if (currentRoom->hasSocks == true && strcmp(temp, "SO") == 0) {//Picks up Socks
           currentRoom->hasSocks = false;//Remove socks from room
           inv->socksInventory = true;//Puts socks in inventory
           cout << "Item picked up" << endl;
         }
	 if (currentRoom->hasSharpie == true && strcmp(temp, "SH") == 0) {//Picks up Sharpie
           currentRoom->hasSharpie = false;//Removes Sharpies from room
           inv->sharpieInventory = true;//Puts sharpies into inventroy
           cout << "Item picked up" << endl;
         }
	 if (currentRoom->hasBaby == true && strcmp(temp, "B") == 0) {//Picks up the baby bag
           currentRoom->hasBaby = false;//Removes bag from room
           inv->babyInventory = true;//Puts bag into inventory
           cout << "Item picked up" << endl;
         }
	 if (currentRoom->hasPlastic == true && strcmp(temp, "P") == 0) {//Picks up the plastic bag
           currentRoom->hasPlastic = false;//Removes plastic bag form room
           inv->plasticInventory = true;//Puts plastic bag into inventory
           cout << "Item picked up" << endl;
         }

	 inventory.push_back(inv);//Pushes back into inventory vector
       }
       else if (strcmp(input, "DROP") == 0) {
	 //Asks user what they want to drop
	 char temp[10];
	 cout << "What item would you like to drop Vending Machine(V), Socks(SO), Baby bag(B), Plastic Bag(P), Sharipe(SH)" << endl;
	 cin >> temp;
	 if (inv->vendingInventory == true && strcmp(temp, "V") == 0) {//Checks to see if you have vending machine in inventory
	   currentRoom->hasVending = true;//Puts vending machine into room 
	   inv->vendingInventory = false;//Removes it from inventory
	   cout << "Item Dropped" << endl;
	 }
	 if (inv->socksInventory == true && strcmp(temp, "SO") == 0) {//Checks to see if you have socks
	   currentRoom->hasSocks = true;//Puts the socks into room
	   inv->socksInventory = false;//Removes them from inventory(Sets to false)
	   cout << "Item Dropped" << endl;
	 }
	 if (inv->sharpieInventory == true && strcmp(temp, "SH") == 0) {//Checks to see if you have sharpie in your inventory
	   currentRoom->hasSharpie = true;//Puts it into the room
	   
	   inv->sharpieInventory = false;//Rmeoves it from the inventory
	   cout << "Item Dropped" << endl;
	 }
	 if (inv->babyInventory == true && strcmp(temp, "B") == 0) {//Checks to see if you have bag
	   currentRoom->hasBaby = true;//Puts bag into room
	   inv->babyInventory = false;//Removes bag from inventory
	   cout << "Item Dropped" << endl;
	 }
	 if (inv->plasticInventory == true && strcmp(temp, "P") == 0) {//Checks to see if you have the bag
	   currentRoom->hasPlastic = true;//Puts into room
	   inv->plasticInventory = false;//Removes the plastic bag from inventory
           cout << "Item Dropped" << endl;
	   
	 }
       }
       
       else if (strcmp(input, "QUIT") == 0) {//Quits the game
	 i = vec.size();//Sets i to vec.size so it exits for loop
	 playing = false;
       }
      if (currentRoom == balcony && inv->plasticInventory == true && inv->vendingInventory == true && inv->socksInventory == true && inv->sharpieInventory == true && inv->babyInventory == true) {//Checks to see if you have all the items and are in the balcony
         cout << "Thank You for returning these to me" << endl;
         cout << "Congradulations for winning" << endl;
         i = vec.size();
	 playing = false;//Sets playing to false
       }
    }
  }
  
  return 0;
}

