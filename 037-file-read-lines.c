#include <stdio.h>

int main(void)
{
  char line[1024];       // Max 1024 char per line 
  FILE *fp;

  fp = fopen("files/bruce-lee.txt", "r");
  
  while (fgets(line, sizeof line, fp) != NULL)
    printf("%s", line);

  fclose(fp);

  return 0;
}
