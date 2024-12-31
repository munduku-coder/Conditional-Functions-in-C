# Conditional-Functions-in-C
This repository contains a collection of C programs that demonstrate the use of functions with return values and void functions to handle conditional logic and computations. The programs covers tasks such as checking even or odd numbers, calculating commissions, validating triangles, determining grades, and more.
## 1.Queation number
This project addresses ****Bachelor of Science in Apllied Information Technology**** class activity week-8(functions conditions).
## 2.Description
_**objective:**_
This project demonstrates how to use functions in **C programming functions** to:
1. Perform conditional checks.
2. Solve real-world problems involving commissions calculation, validations, and classifications.
3. Seperate logic in to modular functions for better redability and maintainability.
## 3.Installation steps
1. clone the repository
2. Navigate to the project directory
3. Compile any of the C files using C compiler
4. Run the compiled program
## 4.Usage
Run individual program to solve specific problems
_examples_

1. Check evenor odd:

   Output: Displays one for 1, 0 for odd

3. Calculate commission

   Input: Quantity and price of marketed items.

   Output: Display commission earned for each item
5. Determine voter eligibility

   Input: Age of the person

   Output: Displays "eligible to vote" or "not eligible to vote"
## 5.Features of the program
1. comprehensive conditional logic:

   Includes checks for grades, triangle validity, and more
2. Commissioon calculation

   Calculates commission for tools based on specific sales thresholds.
4. Modular design:

   Functions are reusable and neatly organised for easy understanding.
6. Flexible inputs:

   Allow user-defined inputs for dynamic calculations.
## 6.Contributing
_**how to contribute**_

1. Fork this repository,
2. Create a new feature branch,
3. Make your changes and commit,
4. Push to your branch,
5. Open a pull request.
## 7.License
This project is licensed under the MIT license. See the LICENSE file for details.
## 8.Authers and maintainers
_**Auther**_

Munduku Innocent

_**Maintainer**_

Munduku Innocent/Munduku coder
## 9.Acknowledgement
1. Dear mum,Angua Betty'
2. International Business Science and Technology University,
3. Fucality of information and communication technology,
4. Engineer, Kato Kenneth.
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

