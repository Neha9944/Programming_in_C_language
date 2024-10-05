#include<stdio.h>
int main()
{
    int a =20  , b = 30 , c = 7;
    float x = 5;

    //Assignment Operator
    a += 3;
    printf("a += 3 : %d\n", a);

    b -= 4;
    printf("b -= 4 : %d\n", b);

    x /= 3;
    printf("x /= 3 : %f\n", x);

    b %= 7;
    printf("c %= 7 : %d\n", c);
}