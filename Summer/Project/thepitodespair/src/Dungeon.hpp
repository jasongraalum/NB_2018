// Copyright (c) 2018 Jason Graalum
//
// Dungeon.hpp
//
// This is a class to define ThePit Dungeon
//
#include <iostream>
#include "Room.hpp"

using namespace std;

class Dungeon {
    public:
        Dungeon();
        void display();

    private:
        Room * entry;
        Room * exit;
        Room * player_room;
};

