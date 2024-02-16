#include <stdio.h>

int main() {
  int n, i;
  float salary, bonus_amt,bonus, total_salary;

  printf("Enter number of employees: ");
  scanf("%d", &n);

  printf("Enter bonus percentages: ");
  scanf("%f", &bonus);  

  for (i = 1; i <= n; i++) {
    printf("Enter salary for employee %d: ", i);
    scanf("%f", &salary);
    bonus_amt = salary * (bonus/100);
    total_salary = salary + bonus_amt;
    printf("Employee %d: Salary = %.2f, Bonus = %.2f, Total Salary = %.2f\n", i, salary, bonus_amt, total_salary);
  }

  return 0;
}
