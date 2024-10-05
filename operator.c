#include <stdio.h>

int main() {
    // Declare variables
    int a = 10, b = 5;
    float x = 5.5, y = 2.0;

    // Arithmetic Operators
    /*printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);      // Addition
    printf("a - b = %d\n", a - b);      // Subtraction
    printf("a * b = %d\n", a * b);      // Multiplication
    printf("a / b = %d\n", a / b);      // Division
    printf("a %% b = %d\n", a % b);     // Modulus
    printf("x + y = %.2f\n", x + y);  */  // Float addition

    // Relational Operators
  /* printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);      // Equal to
    printf("a != b: %d\n", a != b);      // Not equal to
    printf("a > b: %d\n", a > b);        // Greater than
    printf("a < b: %d\n", a < b);        // Less than
    printf("a >= b: %d\n", a >= b);      // Greater than or equal to
    printf("a <= b: %d\n", a <= b);   */   // Less than or equal to

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > b) && (x < y): %d\n", (a > b) && (x < y)); // Logical AND (Returns 1 if both statements are true)
    printf("(a > b) || (x < y): %d\n", (a > b) || (x < y)); // Logical OR (Returns 1 if one of the statements is true)
    printf("!(a > b): %d\n", !(a > b));                       // Logical NOT (Reverse the result, returns 0 if the result is 1)
   
    

   return 0;
}
