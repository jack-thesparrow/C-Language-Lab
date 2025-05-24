#include <stdio.h>

int main() {
  int year;
  printf("Exp9: A program to check whether a year is leap or not.\n");
  printf("Enter a year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0)
        printf("%d is a leap year.", year);
      else
        printf("%d is not a leap year.", year);
    } else
      printf("%d is a leap year.", year);
  } else
    printf("%d is not a leap year.", year);

  return 0;
}
