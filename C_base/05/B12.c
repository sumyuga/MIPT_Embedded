/*
B12 – Наименьшая и наибольшая цифра:
Организовать ввод натурального числа с клавиатуры. 
Программа должна определить наименьшую и наибольшую цифры,
которые входят в состав данного натурального числа.
Input: Целое неотрицательное число
Output: Две цифры через пробел. Сначала наименьшая цифра числа, затем наибольшая.
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
        printf("%d\n", num);
        return 0;
    }
    if (num < 0)
        num = -num;

    int digit = num % 10;
    int max = digit;
    int min = digit;
    while (num /= 10){
        digit = num % 10;
        if (digit > max) max = digit;
        if (digit < min) min = digit;
    }
    printf("%d %d\n", min, max);

    return 0;
}
