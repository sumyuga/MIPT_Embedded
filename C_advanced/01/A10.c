/*
A10 - Распаковать порядок:
Необходимо реализовать программу, которой на входе передаётся вещественное число тип float,
она возвращает порядок который хранится в поле EXP в виде десятичного целого числа.
Функция должна строго соответствовать прототипу: int extractExp(float)
Example:
Input: 1.0
Output: 127
*/
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int extractExp(float number)
{
    uint32_t bits;

    memcpy(&bits, &number, sizeof(bits));
    return (bits >> 23) & 0xFF;
}

int main(void)
{
    float number;

    if (scanf("%f", &number) != 1) {
        return 0;
    }

    printf("%d\n", extractExp(number));
    return 0;
}
