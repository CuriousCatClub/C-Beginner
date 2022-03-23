#include <stdio.h>

struct book
  {
    char *title;
    char *author;
    int edition;
    float price;
  };

int main(void)
{
  float your_price;

  // Not all variables must be initialized
  struct book rare_book = {
    .title = "The Adventures of Tom Sawyer", 
    .author = "Mark Twain", 
    .edition = 1};

  //Let's print the book info
  printf("Title:   %s\n", rare_book.title);
  printf("Author:  %s\n", rare_book.author);
  printf("Edition: %d\n", rare_book.edition);

  printf("-------------------------------------\n");
  printf("How much would you pay for this item? ");
  scanf("%f", &rare_book.price);

  printf("\nYour bid: %.2f\n", rare_book.price);


  return 0;
}
