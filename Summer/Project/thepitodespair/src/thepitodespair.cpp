// Copyright (c) 2018 Jason Graalum
//
//
#include "Dungeon.hpp"
#include "Room.hpp"

using namespace std;

int main()
{
    char room_desc[100];

    cout << "Describe a room: ";
    cin.getline(room_desc, 100);

    Dungeon pit_of_despair;

    //pit_of_despair.display();

    Room test_room1;
    test_room1.describe();

    Room test_room2(room_desc);
    test_room2.describe();
}
