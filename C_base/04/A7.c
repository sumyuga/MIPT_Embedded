/*
A7 – Наибольшее из чисел:
Ввести два числа и вывести их в порядке возрастания
Input: Два целых числа
Output: Два целых числа
*/
#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d \n", (a>b?b:a), (a>b?a:b));
    return 0;
}
