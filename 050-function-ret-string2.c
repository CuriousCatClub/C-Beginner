#include <stdio.h>
#include <string.h>

void getString(char* s)
{
  strcpy(s, "hello");
}

int main(void)
{

  char s[100];
  getString(s);       // s = address of array's 1st element

  s[0] = 'y';
  printf("%s\n", s);

  return 0;
}

/*
  char array is not a string literal and can be 
  changed as shown with 'h' -> 'y'
*/
