#ifndef _COMMANDLINEINPUT_H_
#define _COMMANDLINEINPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include "./validateMatrixSize.h"

int inputHandler (int argc, char *argv[])  {
    // argv[0] holds the name of the program itself
    // so, argc>1 hold line arguments

    if (argc == 2) {
      if (validateMatrixSize(atoi(argv[1]))) {
        printf("The argument supplied is %s\n", argv[1]);
        
        return 0;
      }
      else {
        printf("Invalid array size.\n");
        
        return 1;
      }
    }
    else if (argc > 2) {
      printf("Too many arguments supplied.\n");
      
      return 1;
    }
    else {
      printf("One argument expected.\n");
      
      return 1; 
    }
}

#endif