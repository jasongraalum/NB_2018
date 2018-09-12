// Copyright (c) 2018 Jason Graalum
//
// 
// memalloc.hpp
//
// Class interface for New Beginnings Final Proficiency Exame
// 2018

#ifndef _MEMALLOC_HPP_
#define _MEMALLOC_HPP_

#include "memblock.hpp"

class MemList {
    public:
        // Put a block of data into the list given the starting address and the size
        // of the block.
        // Return false if any of the memory of the new block overlaps with a
        // current block of memory
        // Return true if the block is successfully added.
        bool put(unsigned int, unsigned int);

        // Find the next block of memory that will fit the requested size(int)
        // remove it from the list and return the starting address.
        // If the list does not include any blocks large enough, return 0.
        unsigned int get(unsigned int);

        // Iterate through the list of blocks - combine any blocks that are adjacent
        void clean();

        // Return the total size of all blocks in the list
        unsigned int totalSize();

        // Return the start address of the largest block
        unsigned int max();

        // Return the start address of the smallest block that fits the size requested
        // Ex:  MemList_Obj->minMax(100);  // Return the address of the smallest block 
        //                                    that is greater than 100
        unsigned int minMax(unsigned int);

    private:
        // Pointer to the first block in the memory list
        MemBlock * head;

        // Define the starting address of the memory and total size
        // available in this list when it is created.
        unsigned int start_addr;
        unsigned int size;
}



#endif
