// Copyright (c) 2018 Jason Graalum
//
//
#include "Dungeon.hpp"
#include "Room.hpp"

Dungeon::Dungeon()
{
   entry = new Room();
   exit = new Room();

   Room * d_room; 
   d_room = new Room[4];

   entry->doors[1] = &d_room[2];
   d_room[2].doors[0] = &d_room[0];
   d_room[0].doors[1] = &d_room[1];
   d_room[1].doors[2] = &d_room[3];
   d_room[3].doors[1] = exit; 
   d_room[3].doors[3] = &d_room[2];


   player_room = entry;
}

/*
void Dungeon::display()
{
    for(int y_direction = 0; y_direction < y; y_direction++) {
        for(int x_direction = 0; x_direction < x; x_direction++) {
            if(player_y == y_direction && player_x == x_direction)
                cout << " X ";
            else
                cout << " O ";
        }
        cout << endl;
    }
}
*/
