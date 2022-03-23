#include <stdio.h>

int main(void)
{
  char name[1024];
  float length;
  int mass;
  FILE *fp;

  fp = fopen("files/whales.txt", "r");
  while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    printf("%-8s whale, %.1f meters, %3d tonnes.\n", name, length, mass);

  fclose(fp);

  return 0;
}
