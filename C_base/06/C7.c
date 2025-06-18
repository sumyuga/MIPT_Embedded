/*
С7 – Число N в P-ую систему:
Перевести число N в систему счисления P
Составить функцию, которая переводит число N из десятичной системы 
счисления в P-ичную систему счисления.
Input: Два целых числа. N ≥ 0 и 2 ≤ P ≤ 9
Output: Одно целое число
*/
#include <stdio.h>

unsigned long num_system(unsigned long n, int p)
{
    unsigned long res = 0;
    unsigned long pos = 1;
    if(n == 0) return 0;
    while(n > 0){
        int r = n % p;
        res += r * pos;
        pos *= 10;
        n /= p;
    }
    return res;
}

int main(void)
{
    unsigned long n;
    int p;
    if(scanf("%lu %d", &n, &p) != 2 || n < 0 || (p < 2 && p > 9)){
        printf("Error input\n");
        return 0;
    }
    printf("%lu\n", num_system(n, p));
    return 0;
}
