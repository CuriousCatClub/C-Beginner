#include <stdio.h>

int main(void)
{
  int i;
  int *p;
  p = &i;
  
  int numbers[] = {10, 20, 30, 40, 50};

  // Assign the first array element address to pointer
  // The same can be done with: int *array_ptr = &numbers[0]
  int *array_ptr = numbers;

  
  printf("Size of int is = %zu bytes.\n", sizeof(int));
  printf("Address of p = %p\n", p);

  printf("Adding 1 to address of int pointeri (p = p + 1)...\n");
  p = p + 1;

  printf("\nNow address of p = %p\n", p);

  printf("\n-------------------------------\n");
  printf("\nReading int array elements with pointers.\n");
  printf("1st array element: %d\n", *array_ptr);        // prints 10
  printf("2nd array element: %d\n", *(array_ptr + 1));  // prints 20
  
  return 0;
}
