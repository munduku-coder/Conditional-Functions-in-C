#include <stdio.h>
    int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
    return b;
    }
    }
    int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int maximum = max(a, b);
    printf("The maximum of %d and %d is: %d\n", a, b, maximum);

    return 0;
    }
