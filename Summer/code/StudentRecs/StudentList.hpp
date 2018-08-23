#ifndef _StudentList_hpp_
#define _StudentList_hpp_

#include <iostream>
#include "Student.hpp"

class StudentList {
    private:
    Student * head;
    public:
    StudentList();
    ~StudentList();
    bool addStudent(char *, char *, char *, int);
    bool deleteStudentByID(int);
    void display();
    Student * getStudentByID(int);
};

void duplicate_message(Student *, Student *);


#endif
