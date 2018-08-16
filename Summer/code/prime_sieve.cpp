#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int upper_limit;

    if( argc != 2 ) {
        cout << "Usage: sieve <int>" << endl;
        cout << "Enter a number: " << endl;
        cin >> upper_limit;
    }
    else {
        upper_limit = atoi(argv[1]);
    }

    cout << "Running prime sieve to upper limit of: " << upper_limit << endl;

    bool * primes;
    primes = new bool[upper_limit+1];
    
    for ( int i = 0; i <= upper_limit; i++ )
    {
        primes[i] = true;
    }

    for ( int val = 2; val <= upper_limit/2; val++ )
    {
        if ( primes[val] == true )
        {
            int multiple = val*2;
            while ( multiple <= upper_limit )
            {
                primes[multiple] = false;
                multiple = multiple + val;
            }
        }
    }

    for ( int i = 2; i <= upper_limit; i++ )
    {
        if ( primes[i] == true  )
        {
            cout << i << endl;
        }
    }

    

 return 0;
}
