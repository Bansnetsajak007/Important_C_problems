//passing string as arguments to function

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* encrypt(char* pass){
    int i;
    for(i=0; pass[i] != '\0'; i++){
        *(pass + i) += 10;
        
    }

    *(pass + i) = '\0';

    return pass;
}

char* decrypt(char* pass){
    int i;
    for( i=0; pass[i] != '\0'; i++){
        *(pass + i) -= 10;
        
    }

    *(pass + i) = '\0';

    return pass;
}


int main(){

    char username[20];
    char password[30];
    char choice;

    printf("Enter your user name: ");
    fgets(username,20,stdin);

    printf("Enter your password: ");
    fgets(password,30,stdin);

    printf("data has been success fully recorded\n\n");

    printf("Wanna see details [y/n]? ");
    scanf(" %c", &choice);

    if( tolower(choice) == 'y'){

        printf("UserName: %s", username);
        printf("encrypted Password: %s\n", encrypt(password));
        printf("Original Password: %s\n", decrypt(password));
    }

    else{
        printf("Not a problem see you later!");
    }


    
    return 0;
}