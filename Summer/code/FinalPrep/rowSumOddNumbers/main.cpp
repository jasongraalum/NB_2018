//Copyright (c) 2018 Jason Graalum
//
// main test for rowSumOddNumbers function
//
//

#include <cassert>
#include <iostream>
#include "rowSumOddNumbers.hpp"


int main() {
    int result;

    result = rowSumOddNumbers(1);
    std::cout << "rowSumOddNumbers(1) == " << result << std::endl;
    assert(result==1);

    result = rowSumOddNumbers(2);
    std::cout << "rowSumOddNumbers(2) == " << result << std::endl;
    assert(result==8);

    result = rowSumOddNumbers(5);
    std::cout << "rowSumOddNumbers(5) == " << result << std::endl;
    assert(result==125);


    std::cout << "All tests passed" << std::endl;
}
