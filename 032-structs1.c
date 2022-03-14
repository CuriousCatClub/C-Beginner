#include <stdio.h>

struct album
  {
    char *title;
    char *band_name;
    int year;
    float length;
  };

int main(void)
{
  struct album irish_band;

  irish_band.title = "Joshua Tree";
  irish_band.band_name = "U2";
  irish_band.year = 1987;
  irish_band.length = 51.11;

  //Let's print the album info
  printf("Album title: %s\n", irish_band.title);
  printf("Band:        %s\n", irish_band.band_name);
  printf("Release:     %d\n", irish_band.year);
  printf("Album length %.2f\n", irish_band.length);

  return 0;
}
