/*
A2 - Циклический сдвиг:
На вход программе подаётся беззнаковое 32-битное целое число N и натуральное число K (1 ≤ K ≤ 31).
Требуется циклически сдвинуть биты числа N вправо на K битов и вывести полученное таким образом число.
Example:
Input: 1 2
Output: 1073741824
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t n;
    unsigned int k;
    const unsigned int Bits = 32;

    if (scanf("%" SCNu32 " %u", &n, &k) != 2 || k < 1 || k > 31) {
        return 0;
    }

    n = (n >> k) | (n << (Bits - k));

    printf("%" PRIu32 "\n", n);
    return 0;
}
