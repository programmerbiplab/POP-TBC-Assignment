/*
4.4 (Compute the weekly hours for each employee) Suppose the weekly hours for all
employees are stored in a two-dimensional array. Each row records an employee’s seven-
day work hours with seven columns. For example, the following array stores the work hours
for eight employees. Write a program that displays employees and their total hours in
decreasing order of the total hours.*/

#include <stdio.h>
int main() {
    int hours[8][7] = {
        {2, 4, 3, 4, 5, 8, 8},
        {7, 3, 4, 3, 3, 4, 4},
        {3, 3, 4, 3, 3, 2, 2},
        {9, 3, 4, 7, 3, 4, 1},
        {3, 5, 4, 3, 6, 3, 8},
        {3, 4, 4, 6, 3, 4, 4},
        {3, 7, 4, 8, 3, 8, 4},
        {6, 3, 5, 9, 2, 7, 9}
    };

    int total[8];
    int i, j, temp, tempIndex;
    int index[8];
    for (i = 0; i < 8; i++) {
        total[i] = 0;
        index[i] = i;
        for (j = 0; j < 7; j++) {
            total[i] = total[i] + hours[i][j];
        }
    }
    for (i = 0; i < 8 - 1; i++) {
        for (j = i + 1; j < 8; j++) {
            if (total[i] < total[j]) {
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;

                tempIndex = index[i];
                index[i] = index[j];
                index[j] = tempIndex;
            }
        }
    }
    printf("Employees and their total hours (decreasing order):\n");
    for (i = 0; i < 8; i++) {
        printf("Employee %d: %d hours\n", index[i], total[i]);
    }

    return 0;
}

// Biplab P. Gajurel 25024641