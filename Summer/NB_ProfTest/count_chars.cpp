#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int * count;
    char c;
    ifstream fip;
    ofstream fop;

    // Allocate and Initialize the array
    count = new int[26];
    for (int i = 0; i < 26; i++)
        count[i] = 0;

    // Open the input text file
    fip.open("Gettysburg.txt");

    // Check that the file was opened successfully
    if(fip.is_open()) {
        while(fip.get(c))
        {
            // For each character in the file, set to lowercase
            // and if between a and z, increment the appropriate
            // location in the count array
            char lower_c = tolower(c);
            int index;
            if (lower_c >= 'a' && lower_c <= 'z') 
            {
                index = lower_c - 'a';
                count[index]++;
            }
        }
        fip.close();
    }
    else
        cout << "Error opening file" << endl;

    fop.open("Count.txt");
    if(fop.is_open()) {
        for(char c = 'a'; c <= 'z'; c++)
        {
            int index;
            index  = c - 'a';
            fop << c << " : " << setw(5) << count[index] << " - "; 
            if (count[index] > 0) {
                for(int i = 0; i < (count[index] / 10) + 1; i++)
                    fop << "*";
            }
            fop << endl;
        }
        fop.close();
    }
    else {
        cout << "Error: unable to open output file." << endl;
    }
}
