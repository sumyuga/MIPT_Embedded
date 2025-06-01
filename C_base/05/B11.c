/*
B11 – Перевернуть число:
Ввести целое число и «перевернуть» его,
так чтобы первая цифра стала последней и т.д.
Input: Целое неотрицательное число
Output: Целое не отрицательное число наоборот
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

    int revers = 0;
    for (; num > 0; num /= 10){
        revers = revers * 10 + num % 10;
    }
    printf("%d\n", revers);

    return 0;
}
