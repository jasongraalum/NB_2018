// Copyright (c) 2018 Jason Graalum
//
// isHappyNumber
//
// function that returns true if the number is happy

#include <iostream>
#include <map>
#include "isHappyNumber.hpp"

bool isHappyNumber(int n)
{
    int src_num = n ;
    int count = 1;
    // This is a bad implementation as it is limited
    // w.r.t. the largest number it can check
    //std::cout << "Is " << n << " happy?" << std::endl;
    //bool seen[1000] = { 0 };

    std::map<int, bool> seen;

    while((n != 1) && seen.count(n) == 0)
    {
        count = count + 1;
        seen[n] = true;
        n = sum_of_squares(n);
    }
    std::cout << src_num << (n==1 ? " is " : " is not ") << " a happy number." << std::endl;
    std::cout << "Total comparisons = " << count << std::endl;
    return n == 1;
}

int sum_of_squares(int n) {
    int sum = 0;
    //std::cout << n << " : ";
    while(n > 0) {
        sum += (n % 10) * (n % 10);
        n = n/10;
    }

    //std::cout << sum << std::endl;
    return sum;
}

