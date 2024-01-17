#include <stdio.h>
#include "./library/commandLineInput.h"

int main(int argc, char *argv[])  {
    if (inputHandler(argc, argv) == 1){
        return 1;
    }

    //atoi is a function that converts str to int
    int size = atoi(argv[1]);

    int arr[size];

    // Get the elements of the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }
 
    // Print the elements of the array
    printf("The elements of the array are: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}