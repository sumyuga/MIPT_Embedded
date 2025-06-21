/*
D16 – Точная степень двойки:
Написать логическую рекурсивную функцию и используя ее определить 
является ли введенное натуральное число точной степенью двойки.
int is_2pow(int n)
Input: Одно натуральное число
Output: YES или NO
*/

#include <stdio.h>

int is_2pow(int n){
    if(n == 1)
        return 1;
    if(n == 0 || n % 2 != 0)
        return 0;
    return is_2pow(n / 2);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1){
        printf("Error input\n");
        return 0;
    }
    is_2pow(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}
