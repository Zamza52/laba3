#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a, b;
    char s1[50], s2[50], s3[50];   

    puts("Введите число a:");
    scanf("%lf", &a);
    puts("Введите число b:");
    scanf("%lf", &b);

    sprintf(s1, "%.2f * %.2f", a, b);
    sprintf(s2, "%.2f + %.2f", a, b);
    sprintf(s3, "%.2f - %.2f", a, b);

    printf("------------------------------------------\n");
    printf("| %-12s | %-12s | %-12s |\n", "a * b", "a + b", "a - b");
    printf("------------------------------------------\n");
    printf("| %-12s | %-12s | %-12s |\n", s1, s2, s3);
    printf("------------------------------------------\n");
    printf("| %-12.2f | %-12.2f | %-12.2f |\n", a * b, a + b, a - b);
    printf("------------------------------------------\n");

    system("pause");
    return 0;
}