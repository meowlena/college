#ifndef _MATRIXUTILS_H_
#define _MATRIXUTILS_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float** generateRandomMatrix(int size) {
    float **matrix = (float **)malloc(size * sizeof(float *));
    
    for (int i = 0; i < size; i++) {
        matrix[i] = (float *)malloc(size * sizeof(float));
    }

    srand(time(NULL));

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            *(*(matrix+i) + j) = (rand() % 10);
        }
    }

    return matrix;
}

float** multiplicateMatrices(int size, float** matrix1, float** matrix2) {
    float **result = (float **)malloc(size * sizeof(float *));
    
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        result[i] = (float *)malloc(size * sizeof(float));
    }

    for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                float sum = 0;

                for (int k = 0; k < size; k++)
                {
                    sum += (*(*(matrix1 + i) + k)) * (*(*(matrix2 + k) + j));
                }

                *(*(result + i) + j) = sum;
            }
        }

    return result;
}

void printMatrix(int size, float matrix[size][size], char matrixName[]) {
    printf("The elements of the %s are: \n", matrixName);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%.0f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printMatrixByPointer(int size, float** matrix, char matrixName[]) {
    printf("The elements of the %s are: \n", matrixName);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%.0f ", *(*(matrix+i) + j));
        }
        printf("\n");
    }
}

#endif