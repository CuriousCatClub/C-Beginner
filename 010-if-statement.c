#include <stdio.h>

int main(void)
{
  int computers;
  char answer;
   
  printf("Can I ask you a question [y/n]? ");
  scanf("%c", &answer);

  if (answer == 'y')
    {
      printf("How many computers do you have? ");
      scanf("%d", &computers);
      
      printf("You have %d computers. That is great!\n", computers);
    }

  printf("\nThank you! Good bye!\n");

  return 0;
}
