#include <stdio.h>

int mltply(int a, int b);
void goodbye(void);

int main(void)
{
  
  int n1, n2;

  printf("Enter the 1st number: ");
  scanf("%d", &n1);

  printf("Enter the 2nd number: ");
  scanf("%d", &n2);

  printf("%d multiplied by %d = %d\n", n1, n2, mltply(n1, n2) );

  goodbye();

  return 0;
}

int mltply(int a, int b)
{
  return (a * b);
}

void goodbye(void)
{
  printf("\nGoodbye!\n");
}
