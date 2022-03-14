#include <stdio.h>

struct album
{
  char *album_name;
  int year;
};

void create_album(struct album *album, char name[], int released);


int main(void)
{
  struct album best;
  char name[20];
  int released;

  printf("Enter album name: ");
  scanf("%[^\n]", name);

  printf("Enter the year of album release: ");
  scanf("%d", &released);

  create_album(&best, name, released);

  printf("\nALBUM NAME: %s\n", best.album_name);
  printf("RELEASED:   %d\n", best.year);

  return 0;
}

void create_album(struct album *album, char name[], int released)
{
  album->album_name = name;
  album->year = released;
}
