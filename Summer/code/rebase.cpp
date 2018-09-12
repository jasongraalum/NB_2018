/* Copyright (c) 2018 Jason Graalum
#
# rebase: val base1 base2
#
# Quick program to convert a number of a certain base to
# a number of a second base
#
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char * argv[])
{  
    // 
    // Parse input arguments
    //
    if(argc != 4) {
        cout << "Usage: rebase <input value> <input base> <output base>" << endl;
        return -1;
    }
    int in_val_len = strlen(argv[1]);

    char * value = new char[in_val_len + 1];
    strcpy(value, argv[1]);
    int in_base = atoi(argv[2]);
    int out_base = atoi(argv[3]);

    if(in_base < 2 || in_base > 62 || out_base < 2 || out_base > 62) {
        cout << "Invalid base value:  base range must be in 2 - 62" << endl;
        return -2;
    }
    cout << "Converting " << value << " from base " << in_base << " to " << out_base << endl;

    //
    // First convert to base ten to be easy on my brain!
    //
    long int dec_value = 0; 
    for(int i = 0; i < in_val_len; i++) {
            long int place = pow(in_base,in_val_len-i-1);
        if(value[i] >= '0' && value[i] <= '9')
        {
            dec_value += (place * (value[i] - '0'));
            if(value[i] - '0' >= in_base) {
                cout << "Error:  " << value << " is not a valid base " << in_base << " number." << endl;
                return -1;
            }
        }

        if(value[i] >= 'a' && value[i] <= 'z')
        {
            dec_value += place * (value[i] - 'a' + 10);
            if(value[i] - 'a' + 10 >= in_base) {
                cout << "Error:  " << value << " is not a valid base " << in_base << " number." << endl;
                return -1;
            }
        }

        if(value[i] >= 'A' && value[i] <= 'Z')
        {
            dec_value += place * (value[i] - 'A' + 36);
            if(value[i] - 'A' + 36 >= in_base) {
                cout << "Error:  " << value << " is not a valid base " << in_base << " number." << endl;
                return -1;
            }
        }
    }

    cout << "Decimal value of " << value << " is " << dec_value << endl;

    // 
    // Now convert the decimal value to output base
    //
    
    //
    // First, find the largest digit needed in the output base
    //
    int largest_dig = 0;
    while(pow(out_base,largest_dig) <= dec_value)
        largest_dig++;
    largest_dig--;

    //
    // Now, decompose the decimal value in to the output base
    //
    char * out_base_val = new char[largest_dig+2];
    for(int i = largest_dig; i >= 0; i--) {
        cout << "Start Dec = " << dec_value << "("<< (long int)pow(out_base,i) << ")" << endl;
        long int next_val = dec_value / (long int)pow(out_base,i);
        dec_value -= next_val * pow(out_base,i);
        cout << "Next dig = " << next_val << endl;
        cout << "End Dec = " << dec_value << endl;
        char next_char;
        if (next_val >= 0 && next_val <= 9)
            next_char = '0' + next_val;
        if (next_val >= 10 && next_val <= 35)
            next_char = 'a' + next_val-10;
        if (next_val >= 36 && next_val <= 61 )
            next_char = 'A' + next_val-36;
        out_base_val[largest_dig - i] = next_char;
        cout << i << " : " <<  next_char << endl;
    }

    out_base_val[largest_dig + 1] = '\0';
    cout << out_base_val << endl;

    return 0;
}
