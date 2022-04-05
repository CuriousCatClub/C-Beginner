#include <stdio.h>

struct car 
{
  char *model;
  int doors;
};

// Create an alias for struct car
typedef struct car car;

int main(void)
{

  car my_car;
  my_car.model = "Honda Civic";
  my_car.doors = 4;

  printf("Model: %s\n", my_car.model);
  printf("Doors: %d\n", my_car.doors);

  return 0;
} 
