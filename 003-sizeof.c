#include <stdio.h>

int main(void)
{ 
  int a = 10;
  float b = 20.00;
  char c = 'A';

  printf("Integer       = %zu bytes\n", sizeof(int));
  printf("Float         = %zu bytes\n", sizeof(float));
  printf("Char          = %zu byte\n", sizeof(char));

  printf("Long int      = %zu bytes\n", sizeof(long));
  printf("Double float  = %zu bytes\n", sizeof(double));

  return 0;
}
