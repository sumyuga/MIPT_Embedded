/*
A8 - Весы:
В стартер-боксе есть электронные чашечные весы (вместимость каждой чашки 1 тонна)
и гири массами 1г, 3г, 9г, 27г, и т.д. по одной штуке каждой массы.
Менеджер из рекламного отдела взял такие весы и не знает, можно ли взвесить что-нибудь тяжёлое
и если можно, сколько гирь придётся положить на весы (на любую чашку). Надо помочь ему.
Формат входных данных: единственное натуральное число – масса взвешиваемого товара в граммах
(не больше 1000000000). Формат выходных данных: единственное целое число – общее количество гирь
или число –1 если данный товар взвесить невозможно.
Example:
Input: 8
Output: 2
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t mass;
    uint32_t max_mass = 0;
    uint32_t weight = 1;
    int count = 0;
    const uint32_t CupCapacity = 1000000;
    const uint32_t MaxInput = 1000000000;

    if (scanf("%" SCNu32, &mass) != 1 || mass < 1 || mass > MaxInput) {
        return 0;
    }

    while (max_mass + weight <= CupCapacity) {
        max_mass += weight;
        weight *= 3;
    }

    if (mass > max_mass) {
        printf("-1\n");
        return 0;
    }

    while (mass > 0) {
        uint32_t remainder = mass % 3;

        if (remainder == 1) {
            ++count;
            mass /= 3;
        } else if (remainder == 2) {
            ++count;
            mass = mass / 3 + 1;
        } else {
            mass /= 3;
        }
    }

    printf("%d\n", count);
    return 0;
}
