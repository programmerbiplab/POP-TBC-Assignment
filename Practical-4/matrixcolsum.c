/*
4.3 (Sum elements column by column) Write a program that returns the sum of all the
elements in a specified column in a matrix.*/

#include <stdio.h>

int main() {
    int i, j;
    float matrix[3][4];
    float sum;
    printf("Enter a 3-by-4 matrix row by row:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    for (j = 0; j < 4; j++) {
        sum = 0;
        for (i = 0; i < 3; i++) {
            sum = sum + matrix[i][j];
        }
        printf("Sum of the elements at column %d is %.1f\n", j, sum);
    }

    return 0;
}
// Biplab P. Gajurel 25024641