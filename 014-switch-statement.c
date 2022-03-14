#include <stdio.h>

int main(void)
{
  int computers;

  printf("Enter the number of computers you own: ");
  scanf("%d", &computers);

  switch (computers)
    {
      case 0:
        printf("How can you survive without a computer?\n");
        break;
    
      case 1: 
        printf("What if your only computer breaks?\n");
        break;

      case 2:
        printf("You have %d computers?\n", computers);
        printf("It is a good idea to have a backup.\n");
        break;

      case 3:
        printf("Hmm. a lot computers you have!\n");
        break;

      default:
        printf("You have %d computers?\n", computers);
        printf("You're a compuputer nut!\n");
        break;
    }

  return 0;
}
