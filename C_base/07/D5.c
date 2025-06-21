/*
D5 – Перевод в двоичную систему:
Перевести натуральное число в двоичную систему счисления. 
Необходимо реализовать рекурсивную функцию.
Input: Целое не отрицательное число в десятичной системе счисления
Output: Целое число в двоичной системе счисления
*/

#include <stdio.h>

unsigned int to_binary(int n){
    if(n < 2){
        return n;
    }
    return to_binary(n / 2) * 10 + (n % 2);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    printf("%u\n", to_binary(n));
    return 0;
}
