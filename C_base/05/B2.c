/*
B2 – Квадраты от А до В:
Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b
Input: Два целых числа по модулю не больше 100
Output: Квадраты чисел от a до b
*/
#include <stdio.h>

int main(void)
{
    int num1, num2, square;
    scanf("%d%d", &num1, &num2);
    if (num1 > num2 || num2 > 100) return 0;
    int i = num1;
    while (i<=num2) {
        square = i*i;
        i++;
        printf("%d %s", square, i>num2?"\n":"");
    }
    return 0;
}
