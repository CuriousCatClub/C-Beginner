#include <stdio.h>

int main(void)
{
  FILE *fp;
  char name[50];
  float length;
  int mass;

  fp = fopen("files/whales.txt", "r");

  while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    printf("%-8s whale, %.1f meters, %3d tonnes.\n", name, length, mass);

  fclose(fp);

  return 0;
}
