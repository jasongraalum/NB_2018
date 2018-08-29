#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

#include "StudentList.hpp"

using namespace std;

int main()
{
    StudentList *  nb2018;
    nb2018 = new StudentList;

    ifstream fip;
    fip.open("student_test_records.txt");


    //  Last(char*):First(char*):ID(int):DOB(char*)
    //  Not field is greater than 100 characters
    if(fip.is_open())
    {
        char field1[100];
        char field2[100];
        char field3[100];
        char field4[100];
        
        char * last_name;
        char * first_name;
        int id;
        char * dob;

        while(fip.get(field1, 100, ':') && !fip.eof()) {
            fip.ignore();
            fip.get(field2, 100, ':');
            fip.ignore();
            fip.get(field3, 100, ':');
            fip.ignore();
            fip.get(field4, 100, '\n');
            fip.ignore();


            int first_name_len = strlen(field1);
            first_name = new char[first_name_len + 1];
            strcpy(first_name, field1);

            int last_name_len = strlen(field2);
            last_name = new char[last_name_len + 1];
            strcpy(last_name, field2);

            id = atoi(field3);
            
            int dob_len = strlen(field4);
            dob = new char[dob_len + 1];
            strcpy(dob, field4);

            cout << "First name: " << first_name << endl;
            cout << "Last name: " << last_name << endl;
            cout << "ID : " << id << endl;
            cout << "DOB : " << dob << endl;

            cout << "Adding new record" << endl;
            nb2018->addStudent(first_name, last_name, dob, id);
            cout << "New record added" << endl;
        }
    }
    else
    {
        cout << "Error: could not open file." << endl;
    }
    nb2018->display();

    delete nb2018;
    nb2018 = NULL;

}
