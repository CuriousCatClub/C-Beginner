#include <stdio.h>

int main(void)
{
  int i;

  // One way of initializing an array
  int odd[] = {1, 3, 5, 7, 9};
  int even[5];

  // Another way of initializing an array
  even[0] = 2;
  even[1] = 4;
  even[2] = 5;
  even[3] = 6;
  even[4] = 10;

  printf("odd[0] = %d\n", odd[0]);
  printf("even[1] = %d\n", even[1]);
  
  printf("--------------\n");

  for(i = 0; i < 5; i++)                    // try to read more than five :)
    printf("odd[%d] = %d\n", i, odd[i]);

  printf("--------------\n");

  for(i = 0; i < 5; i++)
    printf("even[%d] = %d\n", i, even[i]);
  

  return 0;
}
