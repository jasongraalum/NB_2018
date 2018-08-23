#ifndef _StudentRec_hpp_
#define _StudentRec_hpp_

#include <iostream>

using namespace std;

class StudentRec {
    private:
    char * lastname;
    char * firstname;
    char * dob;
    int id;
    public:
    StudentRec(char *, char *, char *, int);
    ~StudentRec();
    void display();
    int getId();
};
#endif
