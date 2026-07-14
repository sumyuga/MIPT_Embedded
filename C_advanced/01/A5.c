/*
A5 - Подсчёт битов:
На вход программе подаётся беззнаковое 32-битное целое число N.
Требуется найти количество единичных битов в двоичном представлении данного числа.
Example:
Input: 15
Output: 4
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t n;
    int count = 0;
    const unsigned int Bits = 32;

    if (scanf("%" SCNu32, &n) != 1) {
        return 0;
    }

    for (unsigned int i = 0; i < Bits; ++i) {
        if ((n & ((uint32_t)1 << i)) != 0) {
            ++count;
        }
    }

    printf("%d\n", count);
    return 0;
}
