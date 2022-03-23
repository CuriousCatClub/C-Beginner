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
  // Another way of initializing a struct
  struct book rare_book = {"The Adventures of Tom Sawyer", "Mark Twain", 1, 7899.99};

  //Let's print the book info
  printf("Title:   %s\n", rare_book.title);
  printf("Author:  %s\n", rare_book.author);
  printf("Edition: %d\n", rare_book.edition);
  printf("Price:   $%.2f\n", rare_book.price);

  return 0;
}
