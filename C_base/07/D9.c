/*
D9 – Сумма цифр:
Дано натуральное число N. Вычислите сумму его цифр. Необходимо 
составить рекурсивную функцию. int sum_digits(int n)
Input: Одно натуральное число
Output: Целое число - сумма цифр введенного числа
*/

#include <stdio.h>

unsigned int sum_digits(int n){
    if(n == 0)
        return 0;
    return sum_digits(n / 10) + (n % 10);    
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", sum_digits(n));
    return 0;
}
