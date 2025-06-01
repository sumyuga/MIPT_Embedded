/*
B18 – Числа Фибоначчи
Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
Числа Фибоначчи – это элементы числовой последовательности 
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, .., в которой каждое последующее число равно сумме двух предыдущих.
Input: Одно натуральное число
Output: Ряд чисел Фибоначчи через пробел
*/

#include<stdio.h>

int main(void)
{

    int unsigned n;
    if(scanf("%d", &n) != 1){
        printf("Error input");
        return 0;
    }
    int i = 0;
    int prev = 0, curr = 1;
    while(i++ < n){
        printf("%d ", curr);
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return 0;
}