// Copyright (c) 2018 Jason Graalum
//
// Dungeon.hpp
//
// This is a class to define ThePit Dungeon
//
#include <iostream>

using namespace std;

class Dungeon {
    public:
        Dungeon(int, int);
        bool move_player(char);
        char get_player_input();
        void display();

    private:
        int x;
        int y;
        int player_x;
        int player_y;
};

