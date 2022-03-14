#include <stdio.h>

int main(void)
{
  char name[100];

  printf("Enter name: ");
  
  scanf("%[^\n]", name);          // do not have to use &name as array is pointer

  printf("Name: %s\n", name);     // if name == Jack Sparrow, it will display Jack only

  return 0;
}
