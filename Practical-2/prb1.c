
#include <stdio.h>
int main() {

    char ch;
    char str[100];
    char sen[100];

    // taking input of character
    printf("ENter the special character:");
    scanf("%c", &ch);  
    
    // taking input of word 
    printf("ENter the word(string) input:");
    scanf("%s", str);  
    
    // input of sentence  
    printf("ENter a sentence:");
    scanf(" %[^\n]", sen); 

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}
// Biplab P. Gajurel 25024641