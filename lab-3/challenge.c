#include <stdio.h>

int main()
{
    int p[3];
    float g[3];
    char gd[3];

    printf("Calculus score: ");
    scanf("%d", &p[0]);
    printf("Physic score: ");
    scanf("%d", &p[1]);
    printf("Compro score: ");
    scanf("%d", &p[2]);

    for (int i = 0; i < 3; i++)
    {
        if (p[i] >= 80)
        {
            g[i] = 4.0;
            gd[i] = 'A';
        }
        else if (p[i] >= 70)
        {
            g[i] = 3.0;
            gd[i] = 'B';
        }
        else if (p[i] >= 60)
        {
            g[i] = 2.0;
            gd[i] = 'C';
        }
        else if (p[i] >= 50)
        {
            g[i] = 1.0;
            gd[i] = 'D';
        }
        else
        {
            g[i] = 0.0;
            gd[i] = 'F';
        }
    }

    printf("%-8s %-8s %-8s %-8s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------\n");
    printf("%-8s %-8d %-8c %-8.2f\n", "Cal", p[0], gd[0], g[0]);
    printf("%-8s %-8d %-8c %-8.2f\n", "Physics", p[1], gd[1], g[1]);
    printf("%-8s %-8d %-8c %-8.2f\n\n", "compro", p[2], gd[2], g[2]);
    printf("%-8s %-40.1f\n", "GPA: ", (g[0] + g[1] + g[2]) / 3);

    return 0;
}