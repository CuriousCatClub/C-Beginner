#include <stdio.h>

int main(void)
{
  int a[] = {11, 12, 13, 14, 15};

  printf("The array a[] length = %zu int elements.\n", sizeof(a) / sizeof(int));

  return 0;
}
