//display string to console by removing all vowls from it

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    // Remove vowels from the string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j] = str[i];
            j++;
        }
    }
    
    // Add null terminator to end of result string
    result[j] = '\0';
    
    printf("Result: %s\n", result);
    
    return 0;
}
