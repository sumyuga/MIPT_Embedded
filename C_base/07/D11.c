/*
D11 – Количество двоичных 1:
Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.
Input: Натуральное число
Output: Целое число - количество единиц в двоичной записи числа
*/

#include <stdio.h>

int all_binaryone(int n){
    if(n < 2)
        return n;
    return all_binaryone(n / 2) + (n % 2);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", all_binaryone(n));
    return 0;
}
