#include<stdio.h>
int main()
{
    int age;
    printf("Enter age of person\n");
    scanf("%d",&age);

    if(age>=18){

        printf("You are eligible for vote.");
        }
        else{
        printf("Sorry ! You are not eligible for vote.");
        }
}