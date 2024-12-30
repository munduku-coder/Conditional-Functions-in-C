#include <stdio.h>
    void checkEvenOddAndSign(int num) {
    if (num % 2 == 0) {
    printf("The number %d is Even.\n", num);
    } else {
    printf("The number %d is Odd.\n", num);
    }
    if (num > 0) {
    printf("The number %d is Positive.\n", num);
    } else if (num < 0) {
    printf("The number %d is Negative.\n", num);
    } else {
    printf("The number %d is Zero.\n", num);
    }
    }
    int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOddAndSign(num);
    return 0;
}
