#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

  char *s = malloc(10 * sizeof(char));  // Allocate mem
  if (s == NULL)
    printf("Could not allocate memory!\n");

  strcpy(s, "hi!");
  printf("%s\n", s);

  free(s);                              // Free mem alloc

  return 0;
}
