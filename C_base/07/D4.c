/*
D4 – В прямом порядке:
Дано натуральное число N. Выведите все его цифры по одной, 
в прямом порядке, разделяя их пробелами или новыми строками. 
Необходимо реализовать рекурсивную функцию. void print_num(int num)
Input: Одно целое неотрицательное число
Output: Все цифры числа через пробел в прямом порядке
*/

#include <stdio.h>

void num_digits(int n){
    if(n < 10){
        printf("%d ", n);
        return;
    }
    num_digits(n / 10);
    printf("%d ", n % 10);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    num_digits(n);
    printf("\n");
    return 0;
}
