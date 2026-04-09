// right alignment from 6
#include <stdio.h>
int main() {
    int rows = 6;
    for (int i = rows; i >= 1; i--){
        for (int space = 1; space <= rows - i; space++){
            printf("  ");}
         for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// Biplab P Gajurel 25024641