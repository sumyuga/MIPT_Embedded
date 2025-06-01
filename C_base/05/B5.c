/*
B5 – Сумма цифр:
Ввести целое число и найти сумму его цифр.
Input: Одно целое число большее или равное нулю.
Output: Одно число - сумма цифр
*/
#include <stdio.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    int res = 0;
    if (num == 0){
        printf("%d\n", num);
        return 0;
    }
    else if (num < 0)
        num = -num;
    while (num > 0){
        res += (num % 10);
        num = num/10;
    }
    printf("%d\n", res);
    return 0;
}
