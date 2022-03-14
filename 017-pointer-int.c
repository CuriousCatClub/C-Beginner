#include <stdio.h>

int main(void)
{
  
  int n = 77;
  int *p;         // define pointer to type int

  p = &n;         // pointer must be initialized with address

  printf("Variable n holds %d..\n", n);
  printf("Variable n memory address = %d\n", &n);
  printf("The same memory address using pointer p = %d\n", p);

  printf("Reading var n using pointer... %d\n", *p);

  return 0;
}
