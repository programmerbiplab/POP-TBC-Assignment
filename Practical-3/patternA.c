/*
1
12
123
1234
12345
*/
#include <stdio.h>
int main() {
    int row = 6;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// Biplab P Gajurel 25024641