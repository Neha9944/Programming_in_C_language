#include<stdio.h>
void main()
{
    //Declaration of variable
    int a,b,sum,sub,mul,div,rem;

    printf("enter a value of a:");
    scanf("%d", &a);

    printf("enter a value of b:");
    scanf("%d", &b);

    /*sum = a+b;
    printf("sum of a and b is: %d\n",sum);

    sub = a-b;
    printf("subtraction of a and b is: %d",sub);*/

    mul = a*b;
    printf("Multiplication of a and b is:%d\n",mul);

    div = a/b;
    printf("division of a and b is : %d\n", div);

    rem = a%b;
    printf("remainder of a and b is :%d\n", rem);


}