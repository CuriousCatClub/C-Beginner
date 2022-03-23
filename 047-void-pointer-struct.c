#include <stdio.h>
#include <stdlib.h>

struct animal 
{
  char *name;
  int leg_count;
};

int compar(const void *elem1, const void *elem2)
{
  const struct animal *animal1 = elem1;
  const struct animal *animal2 = elem2;
  
  return animal1->leg_count - animal2->leg_count;
}

int main(void)
{
  struct animal a[4] = 
  {
    {.name="Dog", .leg_count=4},
    {.name="Monkey", .leg_count=2},
    {.name="Antelope", .leg_count=4},
    {.name="Snake", .leg_count=0}
  };

  qsort(a, 4, sizeof(struct animal), compar);

  for (int i = 0; i < 4; i++)
  {
    printf("%d: %s\n", a[i].leg_count, a[i].name);
  }

  return 0;
}
