#include <iostream>
#include <fstream>

using namespace std;

class Student_Node {
    Student_Data * data;
    Student_Node * next;
};

class Student_Data {
    char * last_name;
    char * first_name;
    int id;
    char * dob;
};

int main()
{
    ifstream student_file;
    student_file = fopen("~/student_records.txt");

    while(!student_file.eof())
    {
        char last[100];
        char first[100];
        char id_str;
        int id;
        char dob;

        student_file.get(last, 100, ":");
        student_file.get(first, 100, ":");
        student_file.get(id_str,100,":");
        id = atoi(id_str);
        student_file.get(dob, 100, ":");

        cout << last << ":" << first << ":" << id << endl;
    }

}

