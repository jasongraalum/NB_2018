#include <iostream>
using namespace std;

int main()
{
    char line[256];

    for(int i = 0; i < 5; i++) {
        cout << "Enter a line of text: ";
        cin.get(line, 256, '\n');
        cout << line << endl;
        while(cin.get() != '\n');
    }
}



