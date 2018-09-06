/* Copyright (c) 2018 Jason Graalum
 *
 * Node.hpp
 *
 * Class interface for Node class
 *
 * Practice: Part II code
 *
 * All data members and member functions are public
 *
 * Modified to include second data - string with associated
 * setter, getter and display member functions.
 *
 */
#ifndef _Node_hpp_
#define _Node_hpp_
#include <iostream>
#include <string>

class Node {
    private:
        int data;
        std::string name; // Mod
        Node * next_data;
        Node * next_name; // Mod
    public:
        Node(int, std::string);
        Node();

        void setData(int);
        void setName(std::string);
        int getData();
        std::string getName();

        void setNextData(Node *);
        void setNextName(Node *);
        Node * getNextData();
        Node * getNextName();
        void display();
};
#endif


