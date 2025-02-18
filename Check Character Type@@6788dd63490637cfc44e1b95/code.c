// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit%c\n", ch);
    }
    // Check if the character is an alphabet
    else if (isalpha(ch)) {
        // Convert to lowercase for easy vowel checking
        char lower = tolower(ch);

        // Check if it's a vowel
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel%c\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    }
    /
