#include<stdio.h>
int main()
{
    int  n;
    printf("enter any number:");
    scanf("%d",&n);

    for(int i=1; i<=10; ++i)
    {
        int res = n*i;
        //printf("%d\n",res);
        printf("%d * %d = %d\n", n ,i, n*i);
    }
    return 0;
}