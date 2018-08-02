
/*
Room * doors[4];
bool visited;
Object * objects;
char * description;
*/ 
#include "Room.hpp"
      
const char * default_description= "Boring room";
Room::Room() {
   description = new char[12];
   strcpy(description, default_description);
   doors[0] = NULL;
   doors[1] = NULL;
   doors[2] = NULL;
   doors[3] = NULL;
}

Room::Room(char * d) {
   int d_len = strlen(d);
   description = new char[d_len + 1];
   strcpy(description,d);
   doors[0] = NULL;
   doors[1] = NULL;
   doors[2] = NULL;
   doors[3] = NULL;
}

void Room::describe() {
   cout << description;
   cout << endl;
}

void Room::player_enters() {

}
void Room::player_exits() {
   
}
