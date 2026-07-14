/*
A6 - Инверсия старших битов:
На вход программе подаётся беззнаковое 32-битное целое число N.
Требуется изменить значения всех битов старшего байта числа
на противоположные и вывести полученное таким образом число.
Example:
Input: 1
Output: 4278190081
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t n;
    const unsigned int HighByteShift = 24;

    if (scanf("%" SCNu32, &n) != 1) {
        return 0;
    }

    uint32_t mask = (uint32_t)0xFF << HighByteShift;
    n ^= mask;

    printf("%" PRIu32 "\n", n);
    return 0;
}
