#ifndef _VECTORUTILS_H_
#define _VECTORUTILS_H_

#include <stdio.h>
#include <stdlib.h>

float* generateRandomVector(int size) {
    float* matrix = (float *)malloc((size*size) * sizeof(float));
    
    for (int i = 0; i < size*size; i++){
        *(matrix + i) = (rand() % 10);
        printf("position: %d ", i);
        printf("value: %.0f\n", *(matrix + i));
        
        for (int j = 0; j <= size; j++){
            
        }
    }

    printf("end \n");
    return matrix;
}

float* multiplicateVectorAsMatrix(int size, float* vector1, float* vector2) {
    float* result = (float *)malloc((size*size) * sizeof(float));

    for (int matrix1LineIndex = 0; matrix1LineIndex < size; matrix1LineIndex++){

        for (int matrix2ColumnIndex = 0; matrix2ColumnIndex < size; matrix2ColumnIndex++){
            int currentResult = 0;

            for (int i = 0; i < size; i++){
                int matrix1Value = *(vector1 + (matrix1LineIndex*size) + i);
                int matrix2Value = *(vector2 + matrix2ColumnIndex + (size*i) );

                currentResult += matrix1Value * matrix2Value;
            }

            *(result + matrix1LineIndex*size + matrix2ColumnIndex) = currentResult;
        }
    }

    return result;
}

void printVectorAsMatrix(int size, float* vector, char vectorName[]) {
    printf("The elements of the %s are: \n", vectorName);
    vector -=1;
    for (int i = 1; i <= size*size; i++){
        printf("%.0f ", *(vector + i));
        if ((i%size) == 0){
            printf("\n");
        }
    }
}

#endif