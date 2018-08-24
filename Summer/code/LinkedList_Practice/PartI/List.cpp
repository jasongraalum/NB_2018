/* Copyright (c) 2018 Jason Graalum
 *
 * List.cpp
 *
 * Class implementation for Linked List class
 *
 * Practice: Part I code
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
    Node * temp = new Node;
    temp->data = item;

    // Case 1: head is NULL means List is empty
    if(head == NULL) {
        head = temp;
        temp->next = NULL;
    }
    // Case 2: Insert at the beginning of the List
    else if(item < head->data) {
        temp->next = head;
        head = temp;
    }
    // Case 3/4: Insert in the middle or at the end of the List
    else {
        // current pointer to track traversal through LinkedList
        Node * current = head;
        while(current->next != NULL && current->next->data < item)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
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
      temp = temp->next;
  }
}


