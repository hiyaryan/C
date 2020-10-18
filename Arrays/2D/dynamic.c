#include <stdio.h>
#include <stdlib.h>

int main() {
    int **array;

    // Allocating memory for the rows of the 2d array
    array = malloc(30 * sizeof(*array));
    for (int i = 0; i <= 30; i++) {
        // Allocating memory for the cols of the 2d array
        array[i] = malloc(30 * sizeof(array[0]));
    }

    int i = 0;
    while(i <= 30) {
        int j = 0;
        while(j <= 30) {
            *(*(array+i)+j) = j * i;
            j++;
        }
        i++;
    }

    i = 1;
    while(i <= 30) {
        int j = 1;
        while(j <= 30) {
            printf("%d\t" ,*(*(array+i)+j));
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
