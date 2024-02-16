#include <stdio.h>

int main() {
  float cost, salvage, life, rate;
  int year;

  printf("Enter cost: ");
  scanf("%f", &cost);
  printf("Enter the value at the end of the life: ");  //scrap value
  scanf("%f", &salvage);
  printf("Enter useful life in years: ");
  scanf("%f", &life);

  rate = (1 / life);

  for (year = 1; year <= life; year++) {
    float depreciated_value = cost * rate * year;
    float current_value = cost - depreciated_value;
    printf("Year %d: Depreciation = %.2f, Current Value = %.2f\n", year, depreciated_value, current_value);
  }

  return 0;
}
