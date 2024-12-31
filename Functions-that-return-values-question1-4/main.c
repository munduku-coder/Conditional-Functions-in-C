    #include <stdio.h>
    //Question one: Check Even or Odd
    int isEven(int num)
    { if (num % 2 == 0) {
     return 1;
    } else {
    return 0;
    }}
    //Question two: Find the Maximum of Two Numbers
    int max(int a, int b) {
    return (a > b) ? a : b;
    }
    //Question three: Check Leap Year
    int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }
    //Question four: Sign of a Number
    int signOfNumber(int num) {
    if (num > 0) return 1;
    else if (num < 0) return -1;
    else return 0;
    }
    int main() {
    printf("\nFunctions-that-return-values\n");
    int num, a, b, year, n;
    printf("\nEnter a number to check if it's even or odd: ");
    scanf("%d", &num);
    printf("%d is even when 1 and odd when 0: %d\n", num, isEven(num) ? 1 : 0);
    printf("\nEnter two numbers to find the maximum: ");
    scanf("%d %d", &a, &b);
    printf("Max of %d and %d: %d\n", a, b, max(a, b));
    printf("\nEnter a year to check if it's a leap year: ");
    scanf("%d", &year);
    printf("%d is leap year when 1 and not when 0: %d\n", year, isLeapYear(year));
    printf("\nEnter a number to find its sign: ");
    scanf("%d", &n);
    printf("Sign of %d: %d\n", n, signOfNumber(n));
    return 0;
}
