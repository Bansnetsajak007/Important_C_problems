//goona see this bug later

#include<stdio.h>

struct Students{
    char name[20];
    char faculty[20];
    char semester[20];
    int class_roll;
    int registration_number;
};


int main(){
   struct Students s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d : ", i+1);
        // fgets(s[i].name,20,stdin);
        gets(s[i].name);

        printf("Enter faculty of student %d: ", i+1);
        // fgets(s[i].faculty,20,stdin);
        gets(s[i].faculty);

        printf("Enter semester of student %d : ", i+1);
        // fgets(s[i].semester,20,stdin);
        gets(s[i].semester);

        printf("Enter registration_number of student %d : ", i+1);
        scanf("%d", &s[i].registration_number);

        printf("Enter roll_no of student %d : ", i+1);
        scanf("%d", &s[i].class_roll);
    }

    for (int j= 0; j < 5; j++)
    {
        printf("Details of student %d", j+1);
        printf("\n");
        printf("Name: %s", s[j].name);
        printf("\n");

        printf("faculty: %s", s[j].faculty);
        printf("\n");

        printf("semester: %s", s[j].semester);
        printf("\n");

        printf("registration_number: %d", s[j].registration_number);
        printf("\n");

        printf("Roll No: %d", s[j].class_roll);
        printf("\n");
    }
    
    
    return 0;
}