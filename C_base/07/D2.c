/*
D2 – Сумма от 1 до N:
Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
Input: Одно натуральное число
Output: Сумма чисел от 1 до введенного числа
*/

#include <stdio.h>

int sum_n(int n){
    if(n == 1)
        return 1;
    else if(n == 0)
        return 0;
    return n + sum_n(n - 1);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", sum_n(n));
    return 0;
}
