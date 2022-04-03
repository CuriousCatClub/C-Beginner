#include <stdio.h>

char* getString(void) // this is const char*
{
  /* Keep in mind that literal string
     is kept in RO memory. As such, this
     value cannot be changed, thus 
  */
  
  return "hello";     // returns immutable constant string
}

int main(void)
{

  char* s = getString();
  // s[0] = 'y';    // this won't work as RO memory 
  printf("%s\n", s);

  return 0;
}
