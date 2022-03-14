#include <stdio.h>
#include <string.h>

int main(void)
{
  int i;
  int src[] = {10, 20, 30};
  int dst[3];

  memcpy(dst, src, 3 * sizeof(int)); 

  for (i = 0; i < 3; i++)
  {
    printf("%d\n", dst[i]);
  }

  return 0;
}

/*
  Syntax:
  void *memcpy(void *s1, void *s2, size_t n);
*/
