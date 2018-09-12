#include "fib.hpp"

void nFibs(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << nthFib(i) << std::endl;
    }
}

unsigned int nthFib(int n) {
    unsigned int fib1 = 0;
    unsigned int fib2 = 1;
    for (int i = 0; i < n; i++) {
        std::cout << fib1 << std::endl;
        unsigned int fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    return fib1;
}

