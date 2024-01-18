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

    time_t t;
    srand(time(&t));

    // dynamic allocation of the matrices
    float** matrix1 = generateRandomMatrix(size);
    float** matrix2 = generateRandomMatrix(size);
    float** result = multiplicateMatrices(size, matrix1, matrix2);

    // Print the elements of the matrix
    printMatrixByPointer(size, matrix1, "matrix1");
    printMatrixByPointer(size, matrix2, "matrix2");
    printMatrixByPointer(size, result, "result");

    freeMatrix(size, matrix1);
    freeMatrix(size, matrix2);
    freeMatrix(size, result);
    
    return 0;
}