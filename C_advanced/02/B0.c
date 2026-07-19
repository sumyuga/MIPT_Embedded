/*
A0 - Максимальный блок:
Описана структура данных:
    typedef struct list {
        uint64_t address;
        size_t size;
        char comment[64];
        struct list *next;
    } list;
Требуется реализовать только одну функцию, которая в данном списке находит адрес блока памяти
занимающий больше всего места. Адрес хранится в поле address, поле size - соответствующий
размер данного блока. Если список пустой, то функция должна возвращать 0. Если есть несколько
таких блоков, то вернуть адрес любого из них.
Прототип функции: uint64_t findMaxBlock(list *head)
Example:
Input:  3
        140525067852320 10
        140525067852350 30
        140525067852900 100
Output: 140525067852900
*/

uint64_t findMaxBlock(list *head)
{
    list *max = head;

    if (head == NULL) {
        return 0;
    }

    while (head != NULL) {
        if (head->size > max->size) {
            max = head;
        }

        head = head->next;
    }

    return max->address;
}
