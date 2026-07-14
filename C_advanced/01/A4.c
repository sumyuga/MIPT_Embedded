/*
A4 - Поиск последовательности бит:
На вход программе подаётся беззнаковое 32-битное целое число N и натуральное число
K (1 ≤ K ≤ 31). Требуется взять K подряд идущих битов числа N так, чтобы полученное
число было максимальным. Программа должна вывести полученное число.
Example:
Input: 1024 3
Output: 4
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t n;
    uint32_t max = 0;
    unsigned int k;
    const unsigned int Bits = 32;

    if (scanf("%" SCNu32 " %u", &n, &k) != 2 || k < 1 || k > 31) {
        return 0;
    }

    uint32_t mask = ((uint32_t)1 << k) - 1;

    for (unsigned int i = 0; i <= Bits - k; ++i) {
        uint32_t current = (n >> i) & mask;

        if (current > max) {
            max = current;
        }
    }

    printf("%" PRIu32 "\n", max);
    return 0;
}
