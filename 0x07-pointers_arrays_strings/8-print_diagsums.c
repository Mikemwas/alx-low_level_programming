#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */

void print_diagsums(int *a, int size) {
    int i, j;
    int sum1 = 0, sum2 = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j) {
                sum1 += *(a + i*size + j);  // sum elements on the main diagonal
            }
            if (i == size - j - 1) {
                sum2 += *(a + i*size + j);  // sum elements on the secondary diagonal
            }
        }
    }
    printf("Sum of main diagonal: %d\n", sum1);
    printf("Sum of secondary diagonal: %d\n", sum2);
}

