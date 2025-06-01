/*
B13 – Количество четных и нечетных цифр:
Посчитать количество четных и нечетных цифр числа.
Input: Одно целое неотрицательное число
Output: Два числа через пробел. Количество четных и нечетных цифр в числе.
*/
#include <stdio.h>

int main(void)
{
    int num;
    if (scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    if (num == 0){
        printf("1 0\n");
        return 0;
    }
    if (num < 0)
        num = -num;

    int even = 0;
    int odd = 0;
    while (num > 0){
        (num % 10) & 1 ? odd++ : even++;
        num /= 10;
    }
    printf("%d %d\n", even, odd);

    return 0;
}
