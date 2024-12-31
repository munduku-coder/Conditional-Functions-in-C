    #include <stdio.h>
    //Question number five: Grade Calculator
    char calculateGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
    }
    //Question 6: Temperature Status
    const char* temperatureStatus(float temp) {
    if (temp < 20) return "Cold";
    else if (temp <= 30) return "Warm";
    else return "Hot";
    }
    //Question 7: Check Eligibility
    int isEligible(int age) {
    return age >= 18;
    }
    //Question 8: Positive or Negative
    int isPositive(int num) {
    return num > 0;
    }
    //Question 9: Triangle Validity
    int isValidTriangle(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
    }
    int main() {
    printf("\nQuestions 5-10    \n");
    int score;
    printf("\nEnter score to calculate grade: ");
    scanf("%d", &score);
    printf("\nGrade for score %d: %c\n", score, calculateGrade(score));
    float temp;
    printf("\nEnter temperature to determine status: ");
    scanf("%f", &temp);
    printf("\nTemperature %.2f is: %s\n", temp, temperatureStatus(temp));
    int age;
    printf("\nEnter age to check eligibility to vote: ");
    scanf("%d", &age);
    printf("\nIs age %d eligible to vote? %d\n", age, isEligible(age));
    int num;
    printf("\nEnter a number to check if it's positive or negative: ");
    scanf("%d", &num);
    printf("\nIs %d positive? %d\n", num, isPositive(num));
    int a, b, c;
    printf("\nEnter three sides of a triangle to check validity: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nAre sides %d, %d, %d a valid triangle? %d\n", a, b, c, isValidTriangle(a, b, c));
    return 0;
    }
