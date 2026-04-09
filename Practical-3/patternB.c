// reverse of pattern A(decending order)
#include <stdio.h>
int main() {
    int row = 6;
    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// Biplab P Gajurel 25024641