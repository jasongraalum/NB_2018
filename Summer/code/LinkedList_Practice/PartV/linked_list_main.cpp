/* Copyright (c) 2018 Jason Graalum
 *
 * linked_list_main.cpp
 *
 * main function for testing our Linked List implementation
 *
 * Practice: Part II code
 *
 * Create a linked list of 10 nodes with random integer data
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "List.hpp"


// Copied directly and shamelessly from 
// https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c#440240
void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

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
    // Add 10 random integer values between 0 and 999 to myList
    //
    for(int i = 0; i < 10; i++) {
        int random_val = rand() % 1000;
        int name_size = rand() % 20;
        char * random_name = new char[name_size + 1];
        gen_random(random_name, name_size);

        std::string name(random_name);
        std::cout << random_val << " : " << name << std::endl;

        myList->addNode(random_val,name);
    }
        std::cout << std::endl;

    //
    // Display myList
    //
    myList->displayByData();
    myList->displayByName();
}

