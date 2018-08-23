#include "StudentList.hpp"

StudentList::StudentList() {
    head = NULL;
}

StudentList::~StudentList() {
   Student * current = head;
   while(head != NULL) {
      head = current->getNext();
      delete current;
      current = head;
   }
}

bool StudentList::addStudent(char * lastname, char * firstname, char * dob, int id)
{
    Student * temp = new Student(lastname, firstname, dob, id);

    // Case 1: head is NULL means List is empty
    if(head == NULL) {
        cout << "Case 1 Insert" << endl;
        head = temp;
        temp->setNext(NULL);
    }
    // Case 2: Insert at the beginning of the List
    else if(temp->getId() < head->getId()) {
        cout << "Case 2 Insert" << endl;
        temp->setNext(head);
        head = temp;
    }
    else {
        Student * current = head;
        cout << "Case 3 Insert" << endl;
        if(current->getId() == temp->getId()) {
            duplicate_message(current,temp);
            delete temp;
            return false;
        }

        while(current->getNext() != NULL && current->getNext()->getId() < temp->getId())
        {
            current = current->getNext();
        }
        if(current->getNext() != NULL && 
                (current->getNext()->getId() == temp->getId() ||
                 current->getId() == temp->getId())
                ) { 
            duplicate_message(current, temp);
            delete temp;
            return false; 
        }
        temp->setNext(current->getNext());
        current->setNext(temp);
    }
    return true;
}

void duplicate_message(Student * org_rec, Student * new_rec)
{
    cout << "Duplicate records!!!"<< endl;
    cout << "Original:" << endl;
    org_rec->display();
    cout << "New:" << endl;
    new_rec->display();
}

bool StudentList::deleteStudentByID(int id) {
    Student * current = head;
    // Empty list of ID is less than first id
    if (head == NULL || head->getId() > id) {
        return false;
    }
    // Delete first node
    else if (id == head->getId()) {
        head = head->getNext();
        delete current;
    }
    // Delete middle/end node
    else {

        while(current->getNext() != NULL && current->getNext()->getId() < id)
        {
            current = current->getNext();
        }

        // At end of list and no match found
        if(current->getNext() != NULL && current->getNext()->getId() == id) {
            Student * temp = current->getNext();
            current->setNext(temp->getNext());
            delete temp;
            return true;
        }
    }
    return false;
}

void StudentList::display() {
    Student * current = head;
    while(current != NULL) {
        current->display();
        current = current->getNext();
    }

}

Student * StudentList::getStudentByID(int id) {
    Student * current = head;
    while(current != NULL && current->getId() != id) {
        current = current->getNext();
    }

    return current;
    
}


