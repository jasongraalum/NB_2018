/* Copyright (c) 2018 Jason Graalum
 *
 * List.cpp
 *
 * Class implementation for Linked List class
 * * Practice: Part II code
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
    name_head = NULL;
    data_head = NULL;
}

//
// Method to add a new node to the list
//
void List::addNode(int data, std::string name) {
    // Use the new constructor passing in the data
    // the new Node
    Node * temp = new Node(data, name);

    //
    // Insert into name list
    //
    // Case 1: name_head is NULL means List is empty
    if(name_head == NULL) {
        name_head = temp;
        temp->setNextName(NULL);
    }
    // Case 2: Insert at the beginning of the List
    else if(name < name_head->getName()) {
        temp->setNextName(name_head);
        name_head = temp;
    }
    // Case 3/4: Insert in the middle or at the end of the List
    else {
        // current pointer to track traversal through LinkedList
        Node * current = name_head;
        while(current->getNextName() != NULL && current->getNextName()->getName() < name)
        {
            current = current->getNextName();
        }
        temp->setNextName(current->getNextName());
        current->setNextName(temp);
    }

    //
    // Insert into data list
    //
    // Case 1: data_head is NULL means List is empty
    if(data_head == NULL) {
        data_head = temp;
        temp->setNextData(NULL);
    }
    // Case 2: Insert at the beginning of the List
    else if(data < data_head->getData()) {
        temp->setNextData(data_head);
        data_head = temp;
    }
    // Case 3/4: Insert in the middle or at the end of the List
    else {
        // current pointer to track traversal through LinkedList
        Node * current = data_head;
        while(current->getNextData() != NULL && current->getNextData()->getData() < data)
        {
            current = current->getNextData();
        }
        temp->setNextData(current->getNextData());
        current->setNextData(temp);
    }
}

//
// Simple list display method by data
//
void List::displayByData() {
  Node * temp;
  temp = data_head;
  while(temp) {
      temp->display();
      temp = temp->getNextData();
  }
}

//
// Simple list display method by name
//
void List::displayByName() {
  Node * temp;
  temp = name_head;
  while(temp) {
      temp->display();
      temp = temp->getNextName();
  }
}


