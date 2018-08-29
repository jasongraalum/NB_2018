#include "StudentRec.hpp"

StudentRec::StudentRec(char * lname, char * fname, char * date, int i) 
{
    lastname = lname; 
    firstname = fname;
    dob = date;
    id = i;
}

StudentRec::~StudentRec() {
    if(lastname) delete [] lastname;
    lastname = NULL;
    if(firstname) delete [] firstname;
    firstname = NULL;
    if(dob) delete [] dob;
    dob = NULL;
}

void StudentRec::display() {
    cout << id << " : " << lastname << " : " << firstname << " : " << dob << endl;
}

int StudentRec::getId()
{
    return id;
}
