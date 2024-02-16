// C program to demonstrate
// example of toupper() function.

//character conversion from lowercase

#include <ctype.h>
#include <stdio.h>

int main()
{
	int j = 0;
	char str[] = "HARI IS GOODBOY";  //lowercase characters 
	char ch;

	while (str[j]) {
		ch = str[j];
		putchar(tolower(ch));
		j++;
	}

	return 0;
}
