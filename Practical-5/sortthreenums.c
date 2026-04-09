// WAP to sort three numbers in increasing order
// using functions

#include <stdio.h>
// declaring function
int DisplaySortedNumbers(double num1, double num2, double num3){
    double temp;
    // for making num1 the smallest
    if (num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    // to make num2 smaller than num3
    if (num2 > num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    printf("Numbers in increasing order: %.2f, %.2f, %.2f\n", num1, num2, num3);
    return 0;
}

int main(){
    double n1, n2, n3;
    printf("ENter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    // Calling the function
    DisplaySortedNumbers(n1, n2, n3);
    return 0;
}
// Biplab P. Gajurel 25024641