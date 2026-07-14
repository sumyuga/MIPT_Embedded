/*
A9 - Упаковать массив:
В программе реализована структура данных:
    struct pack_array {
        uint32_t array; // поле для хранения упакованного массива из 0 и 1
        uint32_t count0 : 8; // счётчик нулей в array
        uint32_t count1 : 8; // счётчик единиц в array
    };
Необходимо реализовать программу, которая упаковывает переданный ей массив
из 32-х элементов 0 и 1 в указанную структуру данных.
Функция должна строго соответствовать прототипу: void array2struct(int [], struct pack_array *)
Example:
Input: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Output: 4294901760 16 16
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

struct pack_array {
    uint32_t array;
    uint32_t count0 : 8;
    uint32_t count1 : 8;
};

void array2struct(int arr[], struct pack_array *pack)
{
    pack->array = 0;
    pack->count0 = 0;
    pack->count1 = 0;

    for (int i = 0; i < 32; ++i) {
        pack->array <<= 1;

        if (arr[i] == 1) {
            pack->array |= 1;
            ++pack->count1;
        } else {
            ++pack->count0;
        }
    }
}

int main(void)
{
    int arr[32];
    struct pack_array pack;

    for (int i = 0; i < 32; ++i) {
        if (scanf("%d", &arr[i]) != 1 || (arr[i] != 0 && arr[i] != 1)) {
            return 0;
        }
    }

    array2struct(arr, &pack);

    printf("%" PRIu32 " %d %d\n", pack.array, pack.count0, pack.count1);
    return 0;
}
