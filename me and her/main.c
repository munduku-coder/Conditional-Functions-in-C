    #include <stdio.h>
    //Question number 17: Triangle Validity Message
    void printTriangleValidity() {
    int a, b, c;
    printf("\nEnter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    printf("\nValid Triangle\n");
    else
    printf("\nInvalid Triangle\n");}
    //Question 18: Find and Display Maximum of Three Numbers
    void printMaxOfThree() {
    int a, b, c, max;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    max = a;
    else if (b > c)
    max = b;
    else
    max = c;
    printf("\nThe largest number is: %d\n", max);}
    //Question number 19: Print Largest Even or Odd
    void printLargestEvenOrOdd() {
    int a, b, larger;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    larger = (a > b) ? a : b;
    if (larger % 2 == 0)
    printf("\nLargest number is %d and it is Even\n", larger);
    else
    printf("\nLargest number is %d and it is Odd\n", larger);}
    //Question number 20: Check Triangle Type (Scalene, Isosceles, or Equilateral)
    void printTriangleType() {
    int a, b, c;
    printf("\nEnter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
    if (a == b && b == c)
    printf("\nEquilateral Triangle\n");
    else if (a == b || b == c || a == c)
    printf("\nIsosceles Triangle\n");
    else
    printf("\nScalene Triangle\n");
    } else {
    printf("\nInvalid Triangle\n");}}
    int main() {
    printf("\nBranch 4: Questions 17-20 \n");
    printTriangleValidity();
    printMaxOfThree();
    printLargestEvenOrOdd();
    printTriangleType();
    return 0;}
