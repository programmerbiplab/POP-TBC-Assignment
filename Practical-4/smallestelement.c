/*
4.2 (Find the smallest element) Write a program that finds the smallest element in an array
of double values. Test program that prompts the user to enter ten numbers, finds the
minimum value, and displays the minimum value.*/

#include <stdio.h>
int main() {
    float numbers[10];
    float smallest;
    int i;
    printf("Enter ten numbers: ");

    for (i = 0; i < 10; i++){
        scanf("%f", &numbers[i]);
    }
    smallest = numbers[0];
    for (i = 1; i < 10; i++){
        if (numbers[i] < smallest){
            smallest = numbers[i];
        }
    }
    printf("The minimum value is %.2f\n", smallest);
    return 0;
}
// Biplab P. Gajurel 25024641