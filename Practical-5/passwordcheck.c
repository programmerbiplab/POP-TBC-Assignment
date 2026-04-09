// to check if input password is correct
// COnditions:
/*
A password must have at least eight characters.
A password consists of only letters and digits.
A password must contain at least two digits.*/

#include <stdio.h>
// Declaring function check if input is less than 9 characters
int isDigit(char ch){
    return (ch >= '0' && ch <= '9');
}
// Function to check if a character is a letter (A-Z or a-z)
int isLetter(char ch){
    return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

// Function to check password validity
int isValidPassword(char password[]){
    int length = 0;
    int digitCount = 0;
    int i = 0;
    
    // to calculate length
    while (password[length] != '\0'){
        length++;
    }
    // 1)At least 8 characters
    if (length < 8){
        return 0;
    }
    
    // 2)To check each character
    while (password[i] != '\0') {
        if (isDigit(password[i])){
            digitCount++;
        }
        else if (!isLetter(password[i])){
            return 0;
        }
        i++;
    }
    
    // 3)At least two digits
    if (digitCount < 2){
        return 0;
    }
    return 1;
}

int main() {
    char password[100];
    
    printf("ENter a password: ");
    
    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < 99){
        password[i] = ch;
        i++;
    }
    password[i] = '\0';

    if (isValidPassword(password)){
        printf("Valid Password\n");
    }
    else{
        printf("Invalid Password\n");
    }
    return 0;
}
// Biplab P. Gajurel 25024641