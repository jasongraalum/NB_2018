#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fip;
    fip.open("/u/jgraalum/student_records.txt");

    char * last_name;
    char * first_name;
    int id;
    char * dob;

    //  Last(char*):First(char*):ID(int):DOB(char*)
    //  Not field is greater than 100 characters
    if(fip.is_open())
    {
        char field1[100];
        char field2[100];
        char field3[100];
        char field4[100];
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

            delete [] first_name;
            delete [] last_name;
            delete [] dob;
        }

    }
    else
    {
        cout << "Error: could not open file." << endl;
    }
}
