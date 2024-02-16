//program to find total number of vowels, consonents,digits and blank spaces using pointers 
//one of the application of call by reference

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

void countChars(char *str, int *vowels, int *consonants, int *digits, int *spaces);  //function prototype

int main() {
    char str[MAX_LEN];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Get input string from user
    printf("Enter a line of text:\n");
    fgets(str, MAX_LEN, stdin);

    // Count the characters
    countChars(str, &vowels, &consonants, &digits, &spaces);


    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}

//function defination
void countChars(char *str, int *vowels, int *consonants, int *digits, int *spaces) {
    while (*str != '\0') {
        if (isalpha(*str)) {
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
                (*vowels)++;        //iterating value just to count        
            } else {
                (*consonants)++;        //iterating value just to count
            }
        } else if (isdigit(*str)) {
            (*digits)++;        //iterating value just to count
        } else if (*str == ' ') {
            (*spaces)++;        //iterating value just to count
        }
        str++;
    }
}
