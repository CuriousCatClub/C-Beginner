#include <stdio.h>

void multiply_them(int my_array[], int length)    // or (int *my_array, int length)
{
  int i;
  for(i = 0; i < length; i++)
    my_array[i] = my_array[i] * 4;
}
// -------------------------------------

int main(void)
{
  int i;
  int a[5] = {1, 2, 3, 4, 5};

  for(i = 0; i < 5; i++)
    printf("%d\n", a[i]);

  printf("\nMultiplying by 4...\n");
  
  multiply_them(a, 5);

  printf("-------------------\n");

  for(i = 0; i < 5; i++)
    printf("%d\n", a[i]);

  return 0;
}
