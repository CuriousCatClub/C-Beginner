#include <stdio.h>

int main(void)
{
  int age;
  
  printf("How old are you? ");
  scanf("%d", &age);

  if (age > 65)
    {
      printf("Life is wonderful.\n");
      printf("You deserve an extended vacation now!\n");
    }
  else if (age > 50)
    {
      printf("Awaiting your retirement, aren't ya?\n");
      printf("It is not your time yet!\n");
    }
  else if (age > 30)
    {
      printf("Your youth is behind you, I am afraid :)\n");
    }
  else if (age > 20)
    {
      printf("You are in your prime!\n");
    }
  else
    {
      printf("Ah, to be young again...\n");
    }

  return 0;
}
