// Copyright (c) 2018 Jason Graalum
//
// Stack.hpp
//
// Class Interface for basic Stack implemented
// with a Linked List
//

#include "Stack.hpp"

/*
    private:
        Node * top;
*/
Stack::Stack() {
    top = NULL;
}

Stack::~Stack()
{
    while(top) {
        this->pop();
    }
}

void Stack::push(char c) {
    std::cout << "Pushing: " << c << std::endl;
    Node * new_node = new Node(c);
    new_node->setNext(top);
    top = new_node;
}

char Stack::pop() {
    Node * popped = top;
    char data = top->getData();
    std::cout << "Popping: " << data << std::endl;
    top = top->getNext();
    delete popped;
    return data;
}

char Stack::peek(){
    return top->getData();
}
