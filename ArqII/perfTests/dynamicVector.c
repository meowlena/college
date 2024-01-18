#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "./library/commandLineInput.h"
#include "./library/vectorUtils.h"

int main(int argc, char *argv[])  {
    if (inputHandler(argc, argv) == 1){
        return 1;
    }

    // atoi is a function that converts str to int
    int size = atoi(argv[1]);

    // create seed to generate random values to populate vectors
    time_t t;
    srand(time(&t));

    // dynamic allocation of the vectors
    float* vector1 = generateRandomVector(size);
    float* vector2 = generateRandomVector(size);


    float* result = multiplicateVectorAsMatrix(size, vector1, vector2);

    // print the elements of the vectors
    printVectorAsMatrix(size, vector1, "vector1");
    printVectorAsMatrix(size, vector2, "vector2");
    printVectorAsMatrix(size, result, "result");

    // free vectors
    free(vector1);
    free(vector2);
    free(result);

    return 0;
}