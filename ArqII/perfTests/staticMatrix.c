#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./library/commandLineInput.h"
#include "./library/matrixUtils.h"

int main(int argc, char *argv[])  {
    if (inputHandler(argc, argv) == 1){
        return 1;
    }

    // atoi is a function that converts str to int
    int size = atoi(argv[1]);

    // static allocation of the matrices
    float matrix1[size][size];
    float matrix2[size][size];
    float result[size][size];

    // generate seed for rand
    srand(time(NULL));

    // populate matrices with random values
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix1[i][j] = (rand() % 10);
            matrix2[i][j] = (rand() % 10);
        }
    }

    // multiplication of the matrices 
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            float sum = 0;

            for (int k = 0; k < size; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }

            result[i][j] = sum;
        }
    }
 
    // Print the elements of the array
    printMatrix(size, matrix1, "matrix1");
    printMatrix(size, matrix2, "matrix2");
    printMatrix(size, result, "result");

    return 0;
}