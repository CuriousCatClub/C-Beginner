#include <stdio.h>

int main(void)
{
  /*  Assign a string to a variable = constant string
      It is immutable - cannot do this s[0] = z 
      In C each string with NUL character = '\0'
      Example: char *s = "Cool!" is in fact "Cool!\0" 
  */
  
  char *s = "The gratest teacher, failure is. - Yoda";
  printf("%s\n", s);

  return 0;
}
