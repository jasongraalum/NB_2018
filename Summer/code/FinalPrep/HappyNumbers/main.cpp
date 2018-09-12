//Copyright (c) 2018 Jason Graalum
//
// main test for isHappyNumber function
//
//

#include <cassert>
#include <iostream>
#include <climits>
#include "isHappyNumber.hpp"


int main() {
    bool result;
    int sum_of_squares_result;

    // Test sum of squares
    sum_of_squares_result = sum_of_squares(1);
    std::cout << "sum_of_squares(1) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==1);

    sum_of_squares_result = sum_of_squares(5);
    std::cout << "sum_of_squares(5) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==25);

    sum_of_squares_result = sum_of_squares(123);
    std::cout << "sum_of_squares(123) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==14);

    sum_of_squares_result = sum_of_squares(321);
    std::cout << "sum_of_squares(321) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==14);

    sum_of_squares_result = sum_of_squares(44488);
    std::cout << "sum_of_squares(44488) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==176);

    sum_of_squares_result = sum_of_squares(INT_MAX);
    std::cout << "sum_of_squares(" << INT_MAX << ") == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==260);
    
    sum_of_squares_result = sum_of_squares(1999999999);
    std::cout << "sum_of_squares(1999999999) == " << sum_of_squares_result << std::endl;
    assert(sum_of_squares_result==730);




    result = isHappyNumber(1);
    std::cout << "isHappyNumber(1) == " << result << std::endl;
    assert(result==true);

    result = isHappyNumber(2);
    std::cout << "isHappyNumber(2) == " << result << std::endl;
    assert(result==false);

    result = isHappyNumber(5);
    std::cout << "isHappyNumber(5) == " << result << std::endl;
    assert(result==false);

    result = isHappyNumber(7);
    std::cout << "isHappyNumber(7) == " << result << std::endl;
    assert(result==true);

    result = isHappyNumber(10);
    std::cout << "isHappyNumber(10) == " << result << std::endl;
    assert(result==true);

    result = isHappyNumber(478);
    std::cout << "isHappyNumber(478) == " << result << std::endl;
    assert(result==true);

    result = isHappyNumber(479);
    std::cout << "isHappyNumber(479) == " << result << std::endl;
    assert(result==false);

    result = isHappyNumber(44488);
    std::cout << "isHappyNumber(44488479) == " << result << std::endl;
    assert(result==true);

    result = isHappyNumber(INT_MAX);
    std::cout << "isHappyNumber(INT_MAX) == " << result << std::endl;
    assert(result==false);

    std::cout << "All tests passed" << std::endl;
}
