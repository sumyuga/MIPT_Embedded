/*
С10 – Простые множители числа:
Составить функцию, печать всех простых множителей числа. 
Использовать ее для печати всех простых множителей числа. void print_simple(int n)
Input: Целое положительное число.
Output: Последовательность всех простых множителей данного числа в порядке возрастания.
*/

#include <stdio.h>

void print_simple(int n){ 
    int i = 2;
    while(n > 1){
        while(n%i == 0){
            printf("%d ", i);
            n /= i;
        }
        i++;
    }
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }

    print_simple(n);
    printf("\n");
    return 0;
}
