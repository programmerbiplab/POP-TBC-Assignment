// celsius input to fahrenheit

#include<stdio.h>
int main(){
    float cel, fahren;
    printf("ENter the temperature in celsius:");
    scanf("%f",&cel);
    fahren = (9.0 / 5.0) * cel + 32;
    
    printf("The temperature from celsius scale to fahrenheit is: %.2f ", fahren);
    return 0;
}
// Biplab P. Gajurel 25024641