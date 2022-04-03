#include <stdio.h>

int main(int argc, char * argv[])
{
  char line[] = "Andrew;New York;20;0";

  char name[20] = { 0 };
  char city[20] = { 0 };
  unsigned int age;
  int hasDegree;

  // Notice two ways: [a-zA-Z ] == [^;] in this line
  sscanf(line, "%[a-zA-Z ];%[^;];%u;%d", name, city, &age, &hasDegree);

  printf("%s is in %s and is %u years old\n", name, city, age);

  return 0;
}
