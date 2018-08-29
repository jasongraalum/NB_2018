/* Copyright (c) 2018 Jason Graalum
 *
 * List.cpp
 *
 * Class implementation for Linked List class
 *
 * Practice: Part II code
 *
 * All data members and member functions are public
 *
 */

#include "List.hpp"

// 
// Constructor sets the head pointer to NULL
// indicating an empty list
//
List::List() {
    head = NULL;
}

//
// Method to add a new node to the list
//
void List::addNode(int item) {
    // Use the new constructor passing in the data
    // the new Node
    Node * temp = new Node(item);

    // Case 1: head is NULL means List is empty
    if(head == NULL) {
        head = temp;
        temp->setNext(NULL);
    }
    // Case 2: Insert at the beginning of the List
    else if(item < head->getData()) {
        temp->setNext(head);
        head = temp;
    }
    // Case 3/4: Insert in the middle or at the end of the List
    else {
        // current pointer to track traversal through LinkedList
        Node * current = head;
        while(current->getNext() != NULL && current->getNext()->getData() < item)
        {
            current = current->getNext();
        }
        temp->setNext(current->getNext());
        current->setNext(temp);
    }
}

//
// Simple list display method
//
void List::display() {
  Node * temp;
  temp = head;
  while(temp) {
      temp->display();
      temp = temp->getNext();
  }
}


