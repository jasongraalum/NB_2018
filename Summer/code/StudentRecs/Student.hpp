#ifndef _Student_hpp_
#define _Student_hpp_

#include <iostream>
#include "StudentRec.hpp"

class Student {
    private:
    StudentRec * data;
    Student * next;
    public:
    Student(char *, char *, char *, int);
    ~Student();
    void display();
    void setNext(Student *);
    Student * getNext();
    int getId();
};

#endif
