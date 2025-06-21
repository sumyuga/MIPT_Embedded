/*
D7 – Печать от N до 1:
Составить рекурсивную функцию, печать всех чисел от N до 1.
Input: Одно натуральное число
Output: Последовательность целых чисел от введенного числа до 1, через пробел
*/

#include <stdio.h>

void print_digits(int n){
    if(n == 0)
        return;
    printf("%d ", n);
    print_digits(n - 1);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    print_digits(n);
    printf("\n");
    return 0;
}
