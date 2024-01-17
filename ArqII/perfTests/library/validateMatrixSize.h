#ifndef _VALIDATESTRINGSIZE_H_
#define _VALIDATESTRINGSIZE_H_

#include <stdio.h>

int validateMatrixSize (int size)  {
    // it validates if the size is a power of two between 32 and 32768 (including those)

    if(size == 32 || 
        size == 64 || 
        size == 128 || 
        size == 256 || 
        size == 512 || 
        size == 1024 || 
        size == 2048 || 
        size == 4096 || 
        size == 8192 || 
        size == 16384 || 
        size == 32768) {
        return 1; 
    }
    else {
        return 0; 
    }
}

#endif