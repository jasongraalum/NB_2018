/* Copyright (c) 2018 Jason Graalum
 *
 * linked_list_main.cpp
 *
 * main function for testing our Linked List implementation
 *
 * Practice: Part I code
 *
 * Create a linked list of 10 nodes with random integer data
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "List.hpp"


int main()
{
    //
    // Seed the random number generator with a call to the time function
    //
    srand(time(NULL));

    // 
    // Create a new List called myList
    //
    List * myList = new List;

    //
    // Add 5 random integer values between 0 and 999 to myList
    //
    for(int i = 0; i < 10; i++) {
        int random_val = rand() % 1000;
        myList->addNode(random_val);
    }

    //
    // Display myList
    //
    myList->display();
}

