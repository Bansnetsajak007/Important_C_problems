#include <stdio.h>
#include <string.h>

int main()
{
    char string[20] = "DeifieD";
    char reversed[20];

    // Reverse the string manually
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        reversed[i] = string[length - 1 - i];
    }
    reversed[length] = '\0'; // Add the null terminator at the end of the reversed string

    if (strcmp(string, reversed) == 0) {
        printf("String is a palindrome\n");
    }
    else {
        printf("String is not a palindrome\n");
    }

    return 0;
}
