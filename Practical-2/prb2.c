// sum of all three digit numbers

#include <stdio.h>
int main(){
    int n,a,b,c;
    int sum;

    printf("Enter the three digit number:");
    scanf("%d", &n);

    // The last digit is obtained using modulo 10
    a = n % 10;
    // The middle gigit is obtained by dividing the number by 10 & taking modulo 10
    b = (n / 10) % 10;
    // The first digit is obtained by dividing the number by 100
    c = n / 100;
    // The sum is calculated by adding all three digits
    sum = a + b + c;

    printf("The sum of the three digits is:%d", sum);
    return 0;
}
// Biplab P. Gajurel 25024641