#include <stdio.h>

struct band 
{
  char name[100];
  char album[100];
  int year;
};

int main(void)
{
 
  struct band my_fav_band;
  
  printf("Name your favorite band: ");
  scanf("%[^\n]", my_fav_band.name);
  fgetc(stdin);

  printf("Name their album: ");
  scanf("%[^\n]", my_fav_band.album);

  printf("Year of release: ");
  scanf("%d", &my_fav_band.year);

  printf("\nBand:   %s\n", my_fav_band.name);
  printf("Album:  %s\n", my_fav_band.album);
  printf("Year:   %d\n", my_fav_band.year);

  return 0;
}
