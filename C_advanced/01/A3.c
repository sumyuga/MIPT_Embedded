/*
A3 - Извлечение бит:
На вход программе подаётся беззнаковое 32-битное целое число N и натуральное число
K (1 ≤ K ≤ 31). Требуется взять K младших битов числа N и вывести полученное таким образом число.
Example:
Input: 2 1
Output: 0
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t n;
    unsigned int k;

    if (scanf("%" SCNu32 " %u", &n, &k) != 2 || k < 1 || k > 31) {
        return 0;
    }

    uint32_t mask = ((uint32_t)1 << k) - 1;
    n &= mask;

    printf("%" PRIu32 "\n", n);
    return 0;
}
