/*
С1 – Модуль числа:
Составить функцию, модуль числа и привести пример ее использования.
Input: Целое число
Output: Целое не отрицательное число
*/
#include <stdio.h>

int mod(int num)
{
    if(num < 0) { 
        num = -num;
    }
    return num;
}

int main(void)
{
    int a;
    if(scanf("%d", &a) != 1) {
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", mod(a));
    return 0;
}
