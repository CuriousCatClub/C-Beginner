#include <stdio.h>

int main(void)
{
  int row, column;          // both row and column are int

  int my_array[2][4] = 
    {                       // initialize row/column array
      {1, 2, 3, 4},
      {11, 22, 33, 44}
    };

  for (row = 0; row < 2; row++)
    for (column = 0; column < 4; column++)
      printf("(%d,%d) = %d\n", row, column, my_array[row][column]);

  return 0;
}
