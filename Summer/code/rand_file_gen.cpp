#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int array[10][10];

    int count = 0;

    for(int i=0; i < 10; i++) {
        for(int j=0; j < 10; j++) {
            array[i][j] = count++;
        }
    }

    ofstream array_out_file;

    array_out_file.open("array.out");

    if(array_out_file.is_open()) {
        for(int i=0; i < 10; i++) {
            for(int j=0; j < 10; j++) {
                array_out_file << setw(4) << array[i][j]; 
            }
            array_out_file << endl;
        }

        array_out_file.close();
    }

    ifstream array_in_file;

    array_in_file.open("array.out");

    int new_array[10][10];

    if(array_in_file.is_open())
    {
        for(int i=0; i < 10; i++) {
            for(int j=0; j < 10; j++) {
                array_in_file >> new_array[j][i];
            }
        }
        array_in_file.close();
    }
    
    for(int i=0; i < 10; i++) {
        for(int j=0; j < 10; j++) {
            cout << setw(4) << new_array[i][j]; 
        }
        cout << endl;
    }














}

