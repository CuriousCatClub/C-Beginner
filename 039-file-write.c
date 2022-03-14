#include <stdio.h>

int main(void)
{ 
  FILE *fp;
  int a = 8;

  fp = fopen("files/output.txt", "w");
  
  fputc('M', fp);           // Writes a single character like '\n'
  fputc('o', fp);
  fputc('v', fp);
  fputc('i', fp);
  fputc('e', fp);
  fputc(':', fp);

  fputs(" Super ", fp);     // Writes string

  fprintf(fp, "%d\n", a);   // Writes formatted string

  fclose(fp);

  return 0;
}
