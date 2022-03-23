#include <stdio.h>
#include <string.h>

void *char_memcpy(void *dest, void *src, int byte_count)
{
    // Convert void *s, to char *s
    char *s = src, *d = dest;

    // void * cannot be dereferenced, char * can
    while (byte_count--)    // decrement 7 bck to 0 (0 == false)
    {
      *d++ = *s++;
    }

    // Return dest pointer - why? in def it is void!
    //return dest;
}

int main(void)
{
  char s[] = "I am slowly starting to C you!";  // 30 chars + Nul = 31 chars
  char d[100];
  char *r;                // return pointer after function ends

  //r = char_memcpy(d, s, 31);
  char_memcpy(d, s, 31);

  printf("%s\n", d);

  // printf("Return pointer points to the beginning of dest[] = %c\n", *r);

  return 0;
}
