/*
С3 – Среднее арифметическое:
Написать функцию, которая возвращает среднее арифметическое двух 
переданных ей аргументов (параметров). int middle(int a, int b)
Input: Два целых не отрицательных числа
Output: Одно целое число
*/
#include <stdio.h>

int middle(int a, int b)
{
    return (a+b)/2;
}

int main(void)
{
    int a, b;
    if(scanf("%d %d", &a, &b) != 2 || a < 0 || b < 0) {
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", middle(a,b));
    return 0;
}
