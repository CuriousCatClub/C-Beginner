#include <stdio.h>

// Create struct with an alias
typedef struct car 
{
  char *model;
  int doors;
} car;


int main(void)
{

  car my_car;
  my_car.model = "Subaru BRZ";
  my_car.doors = 2;

  printf("Model: %s\n", my_car.model);
  printf("Doors: %d\n", my_car.doors);

  return 0;
} 
