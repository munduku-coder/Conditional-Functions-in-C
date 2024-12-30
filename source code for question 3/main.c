#include <stdio.h>
    int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    return 1;
    } else {
    return 0;
    }
    }
    int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
    printf("\n%d is a leap year.\n", year);
    } else {
    printf("\n%d is not a leap year.\n", year);
    }
    return 0;
    }
