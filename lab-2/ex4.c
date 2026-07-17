#include <stdio.h>

int main() {
    char name[20];
    char student_id[20];
    float programming, physics, calculus, gpa;

    printf("Enter your Name: ");
    scanf(" %[^\n]%*c", name);

    printf("Enter your student ID: ");
    scanf("%s", student_id);

    printf("Enter your Programming score: ");
    scanf("%f", &programming);

    printf("Enter your Physics score: ");
    scanf("%f", &physics);

    printf("Enter your Calculus score: ");
    scanf("%f", &calculus);

    gpa = (programming + physics + calculus) / 3.0;

    printf("Hi %s(%s)! Your GPA is %.2f\n", name, student_id, gpa);

    return 0;
}