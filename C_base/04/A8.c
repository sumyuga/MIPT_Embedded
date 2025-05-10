/*
A8 – Наибольшее из трёх чисел:
Ввести три числа и найти наибольшее из них
Input: Три целых числа через пробел
Output: Одно наибольшее целое число
*/
#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    max = a>b&&a>c?a:(b>a&&b>c?b:c);
    printf("%d \n", max);
    return 0;
}
