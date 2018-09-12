#include "fib.hpp"
#include <cassert>
#include <iostream>

int main()
{
    int result = nthFib(0);
    assert(result == 0);

    result = nthFib(1);
    assert(result == 1);

    result = nthFib(2);
    assert(result == 1);

    result = nthFib(3);
    assert(result == 2);

    nFibs(50);
}


