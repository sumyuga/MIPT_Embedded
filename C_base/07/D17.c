/*
D17 – Функция Аккермана:
Функция Аккермана определяется рекурсивно для неотрицательных целых чисел 
m и n следующим образом:
A(0, m) = m+1
A(n+1, 0) = A(n, 1)
A(n+1, m+1) = A(n, A(n+1, m))
Реализуйте данную функцию по прототипу int akkerman(int m, int n)
Input: Даны неотрицательные целые числа m и n
Output: Одно целое число
*/

#include <stdio.h>

int akkerman(int m, int n){
    if(m == 0)
        return n + 1;
    if(n == 0)
        return akkerman(m-1, 1);
    return akkerman(m - 1, akkerman(m, n - 1));
}

int main(void)
{   
    int m, n;
    if(scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", akkerman(m, n));
    return 0;
}
