/*
D13 – Печать простых множителей:
Составить рекурсивную функцию, печать всех простых множителей числа.
Input: Натуральное число
Output: Последовательность из всех простых делителей числа через пробел
*/

#include <stdio.h>

void inner(int n, int d){
    if(n == 1)
        return;
    if(n % d == 0){
        printf("%d ", d);
        inner(n / d, d);
    }
    else {
        inner(n, d + 1);
    }
}
void print_denom(int n){
    inner(n, 2);
}


int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    print_denom(n);
    printf("\n");
    return 0;
}
