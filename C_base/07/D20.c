/*
D20 – Возвести в степень:
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
Input: Два целых числа -100 ≤ n ≤ 100 и 0 ≤ p ≤ 100
Output: Одно целое число n в степени p
*/

#include <stdio.h>

long long int recurs_pow(int n, int p){
    if(p == 0)
        return 1;
    return n * recurs_pow(n, p - 1);
}

int main(void)
{   
    int n, p;
    if(scanf("%d %d", &n, &p) != 2 || n < -100 || n > 100 || p < 0 || p > 100){
        printf("Error input\n");
        return 0;
    }
    printf("%lld\n", recurs_pow(n, p));
    return 0;
}
