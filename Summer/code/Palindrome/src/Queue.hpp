// Copyright (c) 2018 Jason Graalum
//
// Queue.hpp
//
// Class Interface for basic Queue implemented
// with a Linked List
//
#ifndef _Queue_hpp_
#define _Queue_hpp_

#include "Node.hpp"

class Queue {
    private:
        Node * front;
        Node * back;
    public:
        Queue();
        ~Queue();
        void enqueue(char);
        char dequeue();
        char peek();
};
#endif
