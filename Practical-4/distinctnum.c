/*
4.1 (Print distinct numbers) Write a program that reads in ten numbers and displays the
number of distinct numbers and the distinct numbers separated by exactly one space (i.e., if
a number appears multiple times, it is displayed only once). (Hint: Read a number and store
it to an array if it is new. If the number is already in the array, ignore it.) After the input, the
array contains the distinct numbers.*/

#include <stdio.h>
int main(){
    int numbers[10];
    int distinct[10];
    int count = 0;
    int i, j, found;
    printf("Enter ten numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < 10; i++){
        found = 0;
        for (j = 0; j < count; j++){
            if (numbers[i] == distinct[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0){
            distinct[count] = numbers[i];
            count++;
        }
    }
    
    printf("Number of distinct numbers: %d\n", count);
    printf("Distinct numbers: ");
    
    for (i = 0; i < count; i++){
        printf("%d ", distinct[i]);
    }
    printf("\n");
    return 0;
}
// Biplab P. Gajurel 25024641