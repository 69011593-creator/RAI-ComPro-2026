#include <stdio.h>
int main()
{
    char Name[20];
    int age;
    float height;
    int weight;
    char gender;
    char Edu[20];
    printf("Enter your Name: ");
    scanf("%s", Name);          
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f" ,&height);
    printf("Enter your weight: ");
    scanf("%d" ,&weight);
    printf("Enter your gender: ");
    scanf(" %c" ,&gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]" ,Edu);
    printf("Name: %s\n" , Name);
    printf("Age: %d\n" , age);
    printf("height: %.1f\n", height);
    printf("weight: %d\n" , weight);
    printf("gender: %c\n" , gender);
    printf("Education: %s" , Edu);
    return 0;

}