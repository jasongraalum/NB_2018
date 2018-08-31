// Copyright (c) 2018 Jason Graalum
//
// Stack.hpp
//
// Class Interface for basic Stack implemented
// with a Linked List
//
#ifndef _Stack_hpp_
#define _Stack_hpp_

#include "Node.hpp"

class Stack {
    private:
        Node * top;
    public:
        Stack();
        ~Stack();
        void push(char);
        char pop();
        char peek();
};

#endif
