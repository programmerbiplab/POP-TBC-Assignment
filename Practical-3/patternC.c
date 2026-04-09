/*
    1
    21
     321
    4321
   54321
654321*/
#include <stdio.h>
int main() {
    int rows = 6;
    for (int i = 1; i <= rows; i++){
        for (int space = 1; space <= rows - i; space++){
            printf("  ");}
        
            for (int j = i; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// Biplab P Gajurel 25024641