#include <stdio.h>
#include <string.h>

int main(void)
{
  int len;
  char quote[] = "Patience you must have my young Padawan. - Yoda";
  printf("%s\n", quote);

  len = strlen(quote);    // Checks a string length

  printf("The quote is %d character long.\n", len);

  return 0; 
}
