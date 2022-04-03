#include <stdio.h>
#include <string.h>

int main(void)
{

  // Compare two char arrays to a certain index
  // using memcmp (any type not just a string cmpnstr()

  int s1[] = { 1, 2, 3, 4, 5 };
  int s2[] = { 1, 2, 3, 4, 8 };
  
  // Below will return 0 s1 == s2 up to 4th character
  printf("%d\n", memcmp(s1, s2, sizeof(int) * 4));

  // Below will return -3; 5 - 8 = -3
  printf("%d\n", memcmp(s1, s2, sizeof(int) * 5));

  return 0;
}
