#include <stdio.h>

int get_str_len(char *s)
{
  char *p = s;
  while (*p != '\0')
    p++;

  return p - s;
}

int main(void)
{
  int str_length;
  char *my_string = "C code runs faster than code in Python";
  
  str_length = get_str_len(my_string);

  printf("The string = %s\n", my_string);
  printf("Length %d bytes\n", str_length);
  
  return 0;
}
