#include <stdio.h>

void mult2(int i)
{
  i = i * 2;
  printf("Inside function mult2(), i = %d\n", i); // produces i = 8
}

int main(void)
{
  int i = 4;

  printf("Inside function main() i = %d\n", i);    // produces i = 4

  printf("\nCalling function mult2()...\n");
  mult2(i);

  printf("\nBack inside function main() i = %d\n", i);

  return 0;
}
