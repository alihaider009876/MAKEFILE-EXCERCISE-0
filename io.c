#include <stdio.h>
#include "io.h"

void print_message(const char* message) {
    printf("%s\n", message);
}

void print_array(int arr[], int size) {
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

