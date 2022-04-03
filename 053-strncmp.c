#include <stdio.h>
#include <string.h>

int main(void)
{

  // Compare two char arrays to a certain index

  char s1[] = "abcde";
  char s2[] = "abcdf";
  
  // Below will return 0 s1 == s2 up to 4th character
  printf("%d\n", strncmp(s1, s2, 4));

  // Below will return -1
  printf("%d\n", strncmp(s1, s2, 5));

  return 0;
}
/*
  ASCII:
  e = 101
  f = 102
  e - f = -1
*/
