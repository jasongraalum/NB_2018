// Copyright (c) 2018 Jason Graalum
//
// Queue.hpp
//
// Class Interface for basic Queue implemented
// with a Linked List
//
#include "Queue.hpp"

/*
    private:
        Node * front;
        Node * back;
*/

Queue::Queue(){
    front = NULL;
    back = NULL;
}

Queue::~Queue(){
    Node * temp;
    while(front) {
        this->dequeue();
    }
}
void Queue::enqueue(char c) {
    std::cout << "Enqueue: " << c << std::endl;
    Node * new_node = new Node(c);
    if(back) {
        back->setNext(new_node);
        back = new_node;
    } else {
        back = new_node;
        front = new_node;
    }
}
char Queue::dequeue() {
    Node * n = front;
    char c = n->getData();
    std::cout << "Dequeue: " << c << std::endl;
    front = front->getNext();
    delete n;
    return c;
}
char Queue::peek() {
    return front->getData();

}
