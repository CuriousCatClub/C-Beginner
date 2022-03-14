#include <stdio.h>

int main(void)
{
  int a = 10;               // int = integeger, i.e. 9, -64, 124, etc.
  float b = 3.14159;        // float = floating point i.e. 3.2.19.00, -76.432, etc.
  char c = 'A';             // a character (must be in single quotes)
  char *s = "Great Scott!"; // a string of characters

  printf("Var a (int) = %d value. Var b (float) = %.2f \n", a, b);
  printf("Doc's line: %s\n", s);

  return 0;
}
