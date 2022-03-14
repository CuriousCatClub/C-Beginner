#include <stdio.h>

int main(void)
{
  int a = 10;
  int b;

  int i = 0;          // i = 0
  printf("i = %d\n", i);

  ++i;                // i = 1, same as i = i + 1 pre-increment
  printf("i = %d\n", i);
  i++;                // i = 2, same as i = i + 1 post-increment
  printf("i = %d\n", i);
  --i;                // i = 1, same as i = i - 1 pre-increment
  printf("i = %d\n", i);
  i--;                // i = 0, same as i = i -1 post-increment
  printf("i = %d\n", i);

  printf("----------------\n");
  
  b = 2 + a++;        // b = 12, a = 11
  printf("b = %d, and a = %d\n", b, a);

  b = 2 + ++a;        // b = 14, a = 12
  printf("b = %d, and a = %d\n", b, a);


  return 0;
}
