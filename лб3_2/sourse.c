#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define ENG 2.54
#define ESP 2.32166
#include <stdlib.h>

int main(void)
{
    int dym;

    puts("Введите количество дюймов:");
    scanf("%d", &dym);


    printf("%d Английских дюймов - это %.2f см\n", dym, ENG * dym);
    printf("%d Испанских дюймов  - это %.2f см\n", dym, ESP * dym);

    system("pause");
    return 0;
}