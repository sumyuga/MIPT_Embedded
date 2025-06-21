/*
D10 – Проверка на простоту:
Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. 
Программа должна вывести слово YES, если число простое или NO в противном случае. 
Необходимо составить рекурсивную функцию и использовать ее.
int is_prime(int n, int denom)
Input: Натуральное число
Output: YES или NO
*/

#include <stdio.h>

int is_prime(int n, int denom){
    if(n < 2)
        return 0;
    if(denom * denom > n)
        return 1;
    if (n % denom == 0)
        return 0;
    return is_prime(n, denom + 1);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    is_prime(n, 2) ? printf("YES\n") : printf("NO\n");
    return 0;
}
