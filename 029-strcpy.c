#include <stdio.h>
#include <string.h>

int main(void)
{
  char quote[] = "Fortune and glory kid, fortune and glory...";
  char q_copy[200];

  // Copy the string - make sure you have enough room :)
  strcpy(q_copy, quote);

  printf("Copied string: \"%s\"\n", q_copy);

  return 0;
}
