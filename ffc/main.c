#include <stdio.h>

    //Question 11: Print Even or Odd
    void printEvenOdd() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("%d is Even\n", num);
    else printf("\n%d is Odd\n", num);
    }
    //Question 12: Display Grade
    void displayGrade() {
    int score;
    printf("\nEnter the score: ");
    scanf("%d", &score);
    if (score >= 90) printf("\nGrade: A\n");
    else if (score >= 80) printf("\nGrade: B\n");
    else if (score >= 70) printf("\nGrade: C\n");
    else if (score >= 60) printf("\nGrade: D\n");
    else printf("\nGrade: F\n");
    }
    //Question 13: Print Leap Year Status
    void printLeapYearStatus() {
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) printf("\n%d is a Leap Year\n", year);
    else printf("\n%d is Not a Leap Year\n", year);
    }
    //Question 14: Print Number Sign
    void printSign() {
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num > 0) printf("\n%d is Positive\n", num);
    else if (num < 0) printf("\n%d is Negative\n", num);
    else printf("\nNumber is Zero\n");
    }
    //Question number 15: Temperature Category
    void categorizeTemperature() {
    float temp;
    printf("\nEnter the temperature: ");
    scanf("%f", &temp);
    if (temp < 20) printf("\nCold\n");
    else if (temp <= 30) printf("\nModerate\n");
    else printf("\nHot\n");
    }
    //Question 16: Voting Eligibility
    void checkEligibility() {
    int age;
    printf("\nEnter the age: ");
    scanf("%d", &age);
    if (age >= 18) printf("\nEligible to vote\n");
    else printf("\nNot eligible to vote\n");
    }
    int main() {
    printf("\nBranch 3: Questions 11-16  \n");
    printEvenOdd();
    displayGrade();
    printLeapYearStatus();
    printSign();
    categorizeTemperature();
    checkEligibility();
    return 0;
}
