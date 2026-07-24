#include <stdio.h>

int main() {
    int c,p,s;
    char n[100];
    printf("Enter your name: ");
    scanf("%s", n);
    printf("Enter your Calculus score: ");
    scanf("%d", &c);
    printf("Enter your Physic score: ");
    scanf("%d", &p);
    printf("Enter your Science score: ");
    scanf("%d", &s);

    float avg = (c + p + s) / 3.0;

    if (avg >= 80)
    {
        printf("%s, you average is %.2f. You got grade A.", n, avg);
    }
    else if (avg >= 70)
    {
        printf("%s, you average is %.2f. You got grade B.", n, avg);
    }
    else if (avg >= 60)
    {
        printf("%s, you average is %.2f. You got grade C.", n, avg);
    }
    else if (avg >= 50)
    {
        printf("%s, you average is %.2f. You got grade D.", n, avg);
    }
    else
    {
        printf("%s, you average is %.2f. You got grade F.", n, avg);
    }

    return 0;
}