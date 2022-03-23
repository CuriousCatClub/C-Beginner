#include <stdio.h>

int main(void)
{
  
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  // in C zero, is false, any other number is true

  while (number)
    {
      printf("%d. Coding is cool!\n", number);
      number--;
    }

  return 0;
}
