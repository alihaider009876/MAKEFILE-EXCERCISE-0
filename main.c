#include <stdio.h>
#include "math.h"
#include "io.h"
#include "utils.h"

int main() {
    int a = 5, b = 10;
    printf("Starting the program...\n");

    int sum = add(a, b);
    print_message("The sum of two numbers:");
    printf("%d\n", sum);

    int sorted_array[5] = {3, 1, 5, 2, 4};
    sort_array(sorted_array, 5);
    print_array(sorted_array, 5);

#ifdef DEBUG
    debug_info();
#endif

    return 0;
}

