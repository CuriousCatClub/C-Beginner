#include <stdio.h>

void mult2(int *i_ptr)
{
  *i_ptr = *i_ptr * 2;
  printf("Inside function mult2, i = %d\n", *i_ptr);
  printf("--------------------\n"); 
}

int main(void)
{
  int i = 4;
  int *i_ptr = &i;

  printf("Inside function main()\n");
  printf("i = %d\n", i);    // produces i = 4
  printf("i = %d\n", *i_ptr);   // also produces i = 4 (using pointer)
  printf("--------------------\n");

  printf("\nCalling function multiply by 2...\n");

  mult2(i_ptr);

  printf("\nBack inside function main(), i = %d\n", i);

  return 0;
}
