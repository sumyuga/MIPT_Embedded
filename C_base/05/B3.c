/*
B3 – Сумма квадратов:
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b
Input: Два целых числа по модулю не больше 100
Output: Сумма квадратов от первого введенного числа до второго
*/
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a>b || b > 100) return 0;
    int i, res;
    res = 0;
    for (i=a; i<=b; i++){
        res += i*i;
    }
    printf("%d\n", res);
    return 0;
}
