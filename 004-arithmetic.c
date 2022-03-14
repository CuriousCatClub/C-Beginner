#include <stdio.h>

int main(void)
{
  int i = 2;
  
  i = i + 10;       // now, i = 12
  printf("i = %d\n", i);
  i = i - 7;        // now, i = 5
  printf("i = %d\n", i);
  i = i * 4;        // now, i = 20
  printf("i = %d\n", i);
  i = i / 4;        // now, i = 5
  printf("i = %d\n", i);
  i = i % 3;        // now, i = 2
  printf("i = %d\n", i);

  return 0;
}
