#include <stdio.h>

int main(void)
{
  FILE *fp;       // Variable representing file
  char c;

  // Open the file
  fp = fopen("files/bruce-lee.txt", "r"); // returns NULL if problem

  // Read file content
  while ((c = fgetc(fp)) != EOF) //fgetc gets char from a stream
    printf("%c", c);
  
  // Close the file
  fclose(fp);

  return 0;
}
