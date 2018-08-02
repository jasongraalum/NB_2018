#include <iostream>

using namespace std;

int main()
{

    int i = 10;
    int * j;
    int ** k;

    j = &i;
    k = &j;

    cout << i << endl;
    cout << sizeof(i) << endl;
    cout << &i << endl;
    cout << sizeof(&i) << endl;
    cout << j << endl;
    cout << sizeof(j) << endl;
    cout << *j << endl;
    cout << sizeof(*j) << endl;
    cout << &j << endl;
    cout << k << endl;
    cout << sizeof(k) << endl;
    cout << *k << endl;
    cout << sizeof(*k) << endl;
    cout << **k << endl;
    cout << sizeof(**k) << endl;
    cout << &k << endl;
}

