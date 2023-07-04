#include <stdio.h>

struct book {
  int id;
  char name[50];
  int price;
};

int main() {
  struct book b[4];
  int i;
  int max_price_index = 0;

  // Input details of students
  printf("Enter details of 4 books:\n");
  for (i = 0; i < 4; i++) {
    printf("Book %d\n", i + 1);
    printf("ID: ");
    scanf("%d", &b[i].id);
    printf("Name: ");
    scanf("%s", b[i].name);
    printf("Price: ");
    scanf("%d", &b[i].price);
    printf("\n");

    if (b[i].price > b[max_price_index].price) {
      max_price_index = i;
    }
  }

  // Book with the heigest price`
  printf("Book with the heigest price:\n");
  printf("ID: %d\n", b[max_price_index].id);
  printf("Name: %s\n", b[max_price_index].name);
  printf("Price: %d\n", b[max_price_index].price);
  printf("\n");

  return 0;
}
