#include <stdio.h>

void print_header(void)
{
  printf("\n  **** Simple Text Editor ****\n");
  printf("----------------------------------\n");
  printf(" Start typing, finish with CTRL-D\n");
  printf(" Text saved in files/my-text.txt\n");
  printf("----------------------------------\n");
}

int main(void)
{
  FILE *fp;
  int c;

  fp = fopen("files/my-text.txt", "w");
  print_header();

  while ((c = getchar()) != EOF)
    fputc(c, fp);

  fclose(fp);

  return 0;
}
