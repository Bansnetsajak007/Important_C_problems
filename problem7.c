//simple algorith to encode a string characters

#include<stdio.h>

 
char* encode(char* str) {
   int i = 0;
 
   while (str[i]) {
      str[i] = str[i] - 2;  // Subtract 30 From Charcter
      i++;
   }
   return (str);
}
 
int main() {
 
   char *str;
 
   printf("\nEnter the String to be Encode : ");
   gets(str);
 
   str = encode(str);
   printf("\nEncoded String : %s", str);
 
    return 0;
}