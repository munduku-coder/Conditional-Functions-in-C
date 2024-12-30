#include <stdio.h>
    char calculateGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
    }
    const char* temperatureStatus(float temp) {
    if (temp < 15) {
    return "Cold";
    } else if (temp <= 25) {
    return "Warm";
    } else {
    return "Hot";
    }
    }
    int main() {
    int score;
    printf("Enter the score (0-100) to calculate the grade: ");
    scanf("%d", &score);
    if (score < 0 || score > 100) {
    printf("Invalid score. Please enter a value between 0 and 100.\n");
    } else {
    char grade = calculateGrade(score);
    printf("The grade for a score of %d is: %c\n", score, grade);
    }
    float temp;
    printf("\nEnter the temperature (in degrees Celsius): ");
    scanf("%f", &temp);
    const char* status = temperatureStatus(temp);
    printf("The temperature status for %.2f°C is: %s\n", temp, status);
    return 0;}
