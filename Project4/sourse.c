#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1;   
    int num2;   

    puts("Введите целое число:");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);

    puts("Введите второе целое число:");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    printf("\nСумма:        %d + %d = %d\n", num2, num1, num2 + num1);
    printf("Разность:     %d - %d = %d\n", num2, num1, num2 - num1);
    printf("Произведение: %d * %d = %d\n", num2, num1, num2 * num1);

    if (num1 != 0)
    {
        printf("Частное:      %d / %d = %d\n", num2, num1, num2 / num1);
        printf("Остаток:      %d %% %d = %d\n", num2, num1, num2 % num1);
    }
    else
    {
        printf("Деление на ноль невозможно!\n");
    }

    system("pause");
    return 0;
}