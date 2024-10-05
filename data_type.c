#include<stdio.h>
int main()
{
    //Declare variable
    int myInt ;
    float myFloat;
    char myChar ;
    double myDouble ;

    // Take input from the user
    printf("Enter an integer:\n ");
    scanf("%d", &myInt);
    
    printf("Enter a float:\n ");
    scanf("%f", &myFloat);
    
    printf("Enter a character: \n");
    scanf(" %c", &myChar);  // Notice the space before %c to consume any newline character
    
    printf("Enter a double:\n ");
    scanf("%lf", &myDouble);

    // Print their values
    printf("\nInteger: %d\n", myInt);
    printf("Float: %.2f\n", myFloat);
    printf("Character: %c\n", myChar);
    printf("Double: %.10lf\n", myDouble);

    return 0;

}