#include <stdio.h>
#include <string.h>

int main(void)
{

  char s1[] = "rat";
  char s2[] = "bat";

  // <string.h> has a string comparison function
  // returns value < 0 if stopping char s1 is < than s2
  // returns value > 0 if stopping char s1 is > than s2
  // returns value 0 if s1 == s2

  printf("%d\n", strcmp(s1, s2));

  return 0;
}

/*
r = 114
b = 98

r - b = 16
strcmp will return value 16

*/
