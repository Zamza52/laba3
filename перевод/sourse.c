#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 1251 > nul"); // смена кодировки консоли на 1251
    printf("Привет, мир!\n");
    return 0;
}

