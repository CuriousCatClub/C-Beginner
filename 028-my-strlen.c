#include <stdio.h>

int my_strlen(char *s)
{
  int count = 0;
  while (s[count] != '\0')
    count++;

  return count;
} 

int main(void)
{
  int len;
  char *s = "Cool!";
  
  printf("%s\n", s);

  len = my_strlen(s);
  printf("The string is %d character long.\n", len);
  
  return 0;
}
