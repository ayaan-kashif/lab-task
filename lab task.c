#include<stdio.h>

int main(){
    int ayaan;
    
    int Age;
    char Name[50], Department[50],Student_ID[20],University_name[50];

    printf("ENTER YOUR NAME");
    scanf("%s",&Name);
    printf("Name is %s \n",Name);

    printf("ENTER YOUR AGE");
    scanf("%d",&Age);
    printf("Age is %d \n",Age);

    printf("ENTER DEPARTMENT NAME");
    scanf("%s",&Department);
    printf("YOUR DEPARTMENT IS %s \n",Department);

    printf("ENTER STUDENT ID");
    scanf("%s",&Student_ID);
    printf("YOUR STUDENT ID IS %s \n",Student_ID);

    printf("ENTER YOUR UNIVERSITY NAME");
    scanf("%s",&University_name);
    printf("YOUR UNIVERSITY NAME IS %s \n",University_name);
    return 0;
}
