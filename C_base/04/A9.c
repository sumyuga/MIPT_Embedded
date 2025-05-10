/*
A9 – Наибольшее из пяти чисел:
Ввести пять чисел и найти наибольшее из них
Input: Пять целых чисел разделенных пробелом
Output: Одно наибольшее целое число
*/
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, max;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a;
    if (b>max) max = b;
    if (c>max) max = c;
    if (d>max) max = d;
    if (e>max) max = e;
    printf("%d \n", max);
    return 0;
}
