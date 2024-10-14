#include <stdio.h>
int main() {

  int a, b, c;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  // outer if statement
  if (a >= b) {

    // inner if...else
    if (a >= c)
      printf("%d is the largest number.", a);
    else
      printf("%d is the largest number.", c);
  }

  // outer else statement
  else {

    // inner if...else
    if (b >= c)
      printf("%d is the largest number.", b);
    else
      printf("%d is the largest number.", c);
  }

  return 0;
}