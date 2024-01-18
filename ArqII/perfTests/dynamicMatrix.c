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

    // dynamic allocation of the matrices
    float** matrix1;
    float** matrix2;

    matrix1 = generateRandomMatrix(size);
    matrix2 = generateRandomMatrix(size);
    float** result = multiplicateMatrices(size, matrix1, matrix2);

    // Print the elements of the array
    printMatrixByPointer(size, matrix1, "matrix1");
    printMatrixByPointer(size, matrix2, "matrix2");
    printMatrixByPointer(size, result, "result");

    return 0;
}