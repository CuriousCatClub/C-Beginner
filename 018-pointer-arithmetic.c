#include <stdio.h>

int main(void)
{
  int i;
  int *p;
  p = &i;

  printf("Size of int is = %zu bytes.\n", sizeof(int));
  printf("Address of p = %p\n", p);

  printf("Adding 1 to address of int pointeri (p = p + 1)...\n");
  p = p + 1;

  printf("\nNow address of p = %p\n", p);

  return 0;
}
