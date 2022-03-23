#include <stdio.h>
#include <stdlib.h>

int compare (const void *n1, const void *n2)
{
  const int *a = n1, *b = n2;
  return *a - *b;
}

int main(void)
{
  int i;
  
  int my_numbers[5] = {34, 23, 14, 11, 25};

  printf("Numbers before sorting:\n");
  for (i = 0; i < 5; i++)
    printf("my_numbers[%d] = %d\n", i, my_numbers[i]);

  qsort(my_numbers, 5, sizeof(int), compare);

  printf("\nNumbers after sorting:\n");
  for (i = 0; i < 5; i++)
    printf("my_numbers[%d] = %d\n", i, my_numbers[i]);
 
  return 0;
}
