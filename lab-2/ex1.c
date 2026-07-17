#include <stdio.h>
int main()
{
    int inte;
    float flt;
    char chrc;
    printf("Please enter an integer value: ");
    scanf("%d", &inte);
    printf("You entered %d\n", inte);
    printf("Please enter an float value: ");
    scanf("%f" ,&flt);
    printf("You entered %.1f\n", flt);
    printf("Please enter an charecter value: ");
    scanf(" %c" ,&chrc);
    printf("You entered %c\n", chrc);

    return 0;

}