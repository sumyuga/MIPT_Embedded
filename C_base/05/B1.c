/*
B1 – Квадраты и кубы:
Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100
Input: Одно целое число не превосходящее 100
Output: Для каждого из чисел от 1 до введенного числа напечатать квадрат числа и его куб
*/
#include <stdio.h>

int main(void)
{
    int num, square, cube;
    scanf("%d", &num);
    if (num > 100) return 0;
    for (int i=1; i<=num; i++){
        square = i*i;
        cube = i*i*i;
        printf("%d %d %d \n", i, square, cube);
    }
    return 0;
}
