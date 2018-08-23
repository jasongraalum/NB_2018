#include "Student.hpp"
#include "StudentRec.hpp"

Student::Student(char * lastname, char * firstname, char * dob, int id)
{
    StudentRec * new_rec = new StudentRec(lastname, firstname, dob, id);
    data = new_rec;
    next = NULL;
}
Student::~Student() 
{
    delete data;
}
void Student::display()
{
    data->display();
}

int Student::getId() {
    return data->getId();
}

void Student::setNext(Student * new_next)
{
    next = new_next;
}

Student * Student::getNext()
{
    return next;
}
