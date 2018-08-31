// Copyright (c) Jason Graalum
//
// palindrome checker implemented with a Queue and Stack
//

#include <cassert>
#include <iostream>

#include "Stack.hpp"
#include "Queue.hpp"

bool isPalindrome(char * word)
{
    Stack word_lifo;
    Queue word_fifo;
    int letter_count = 0;
    while(word[0] != '\0')
    {
        word_lifo.push(word[0]);
        word_fifo.enqueue(word[0]);
        word = word + 1;
        letter_count++;
    }

    for(int i = 0; i < (letter_count+1)/2; i++) {
        if(word_lifo.pop() != word_fifo.dequeue())
            return false;
    }

    return true;
}

