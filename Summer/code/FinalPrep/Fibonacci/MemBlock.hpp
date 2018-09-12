// Copyright (c) 2018 Jason Graalum
//
// 
// memblock.hpp
//
// Memory Block Class interface for New Beginnings Final Proficiency Exam
//

#ifndef _MEMBLOCK_HPP_
#define _MEMBLOCK_HPP_

class MemBlock {
    public:
        // Constructor that takes the start address for the block and the size
        MemBlock(unsigned int, unsigned int);

        // Getter and Setter methods for next pointer
        MemBlock * getNext();
        void setNext(MemBlock *);

        // Return the size of the current memory block
        unsigned int getSize();

    private:
        unsigned int start;
        unsigned int size;
        MemBlock * next;
}



#endif

