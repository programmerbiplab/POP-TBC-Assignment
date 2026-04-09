// WAP that takes input of numbers
// selects the largest number and prints its occurence

#include <stdio.h>
int main() {
    int number, max, count;
    printf("Enter numbers (end with 0):\n");
    scanf("%d", &number);
    
    if (number == 0) {
        printf("No numbers entered.\n");
        return 0;
    }
    max = number;
    count = 1;
    while (1) {
        scanf("%d", &number);
        if (number == 0){
            break;}
        if (number > max){
            max = number;
            count = 1;
        }
        else if (number == max){
            count++;
        }
    }
    printf("\nLargest number is: %d\n", max);
    printf("It appears %d times.\n", count);
    return 0;
}
// Biplab P Gajurel 25024641