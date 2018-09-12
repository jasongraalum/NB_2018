// Copyright (c) 2018 Jason Graalum
//
// test1.cpp
//
// First test of Stack/Queue implementation of 
// isPalindrome function
//
#include "palindrome.hpp"
#include <cassert>
#include <iostream>
#include <cstdlib>


int main(int argc, char * argv[])
{
    for(int i = 1; i < argc; i=i+2)
    {
        if(strcmp("true",argv[i+1]))
            assert(isPalindrome(argv[i]) == false);
        else
            assert(isPalindrome(argv[i]) == true);
    }
}
