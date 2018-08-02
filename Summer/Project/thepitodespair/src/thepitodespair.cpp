// Copyright (c) 2018 Jason Graalum
//
//
#include "Dungeon.hpp"

int main()
{
    char player_move;

    Dungeon pit_of_despair(10, 10);

    pit_of_despair.display();

    while((player_move = pit_of_despair.get_player_input()) != 'x')
    {
        pit_of_despair.move_player(player_move);
    }
}
