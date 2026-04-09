// monthly saving amount input
// output after 6 months
// add interest

#include <stdio.h>
int main() {
    float Saving;
    float interest = 0.05 / 12; 
    float balance = 0;
    int month;
    printf("ENter monthly saving amount: ");
    scanf("%f", &Saving);
    for (month = 1; month <= 6; month++) {
        balance = (balance + Saving) * (1 + interest);
    }
    
    printf("Savings after 6 months: %.2f\n", balance);
    return 0;
}
// Biplab P. Gajurel 25024641