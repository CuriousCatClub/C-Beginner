#include <stdio.h>

int main(void)
{
  FILE *fp;
  unsigned char bytes[] = {1, 2, 3, 4, 5, 6};

  fp = fopen("files/output.bin", "wb");     // wb = write binary

  /*
      In the call to fwrite, the arguments are:
        - Pointer to src-data to write
        - Size of each "piece" of data
        - Count of each "piece" of data
        - FILE*

      Run, and check hexdump -C /files/output.bin
  */

  fwrite(bytes, sizeof(char), sizeof bytes, fp);
  fclose(fp);

  return 0;
}
