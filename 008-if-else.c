#include <stdio.h>

int main(void)
{
  int speed;
  
  printf("You are driving a car.\n");
  printf("What's your current speed in km/h? ");

  scanf("%d", &speed);

  if (speed > 50)
    {
      printf("You are driving too fast!\n");
      printf("Please slow down now!\n");
    }
  else
    {
      printf("Your current speed is %d km/h.\n", speed);
      printf("Thank you!\n");
    }

  return 0;
}
