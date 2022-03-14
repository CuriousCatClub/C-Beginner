#include <stdio.h>

int main(void)
{
  
  int number = 10;

  while (number)
    {
      printf("n = %d\n", number);
      --number;
      if (number < 5)
        break;
    }

  return 0;
}
