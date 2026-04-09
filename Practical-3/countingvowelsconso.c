// a program to count the number
/*of vowels and consonants present in the
input sentence*/

#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;
    printf("ENter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
        else if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }
    printf("\nThe number of vowels is: %d\n", vowels);
    printf("The number of consonants is: %d\n", consonants);
    return 0;
}
// Biplab P Gajurel 25024641