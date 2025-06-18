/*
С2 – Степень числа:
Составить функцию, возведение числа N в степень P. int power(n, p) 
и привести пример ее использования.
Input: Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
Output: Одно целое число
*/
#include <stdio.h>

int power(int n, int p)
{
    int res = 1;
    for(int i=0; i<p; i++){
        res *= n;
    }
    return res;
}

int main(void)
{
    int n, p;
    if(scanf("%d %d", &n, &p) != 2 || p < 0 || n > 1000) {
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", power(n,p));
    return 0;
}
