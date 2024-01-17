#ifndef _RANDOMMATRIX_H_
#define _RANDOMMATRIX_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** generateRandomMatrix(int size){
    int **matrix = (int **)malloc(size * sizeof(int *));
    
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        matrix[size] = (int *)malloc(size * sizeof(int));
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix[i][j] = (rand() % 10);
        }
    }

    return matrix;
}

#endif