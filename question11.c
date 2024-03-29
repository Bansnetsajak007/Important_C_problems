#include <stdio.h>

void convertCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        } else if (str[i] >= 65 && str[i] <= 90) {
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertCase(str);

    printf("Converted string: %s", str);

    return 0;
}