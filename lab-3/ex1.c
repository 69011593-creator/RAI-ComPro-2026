#include <stdio.h>

int main() {
    int x1 , x2;
    printf("Enter a number: ");
    scanf("%d",&x1);
    printf("Enter a number: ");
    scanf("%d",&x2);

    if (x1 == x2) printf("Match");
    else printf("Does not match. Try again");

    return 0;
}