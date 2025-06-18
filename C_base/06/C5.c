/*
С5 – Сумма от 1 до N:
Составить функцию, которая определяет сумму всех чисел от 1 до N
и привести пример ее использования.
Input: Одно целое положительное число N
Output: Целое число - сумма чисел от 1 до N
*/
#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; ++i){
        sum += i;
    }
    return sum;
}

int main(void)
{
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", sum(n));
    return 0;
}
