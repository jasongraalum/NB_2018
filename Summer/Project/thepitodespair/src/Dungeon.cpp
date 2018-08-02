// Copyright (c) 2018 Jason Graalum
//
//
#include "Dungeon.hpp"

Dungeon::Dungeon(int dungeon_x, int dungeon_y)
{
    x = dungeon_x;
    y = dungeon_y;
    player_x = 0;
    player_y = 0;
}

bool Dungeon::move_player(char move)
{
    return false;
}

char Dungeon::get_player_input()
{
    return 'x';
}

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
