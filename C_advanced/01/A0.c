
/*
A0 - Сколько раз встречается максимум:
На стандартном потоке ввода задаётся натуральное число N
(N > 0), после которого следует последовательность из N целых чисел.
На стандартный поток вывода напечатайте, сколько раз в этой последовательности встречается максимум.
Указание: использовать массивы запрещается.
Example:
Input: 6 1 2 3 2 0 3
Output: 2
*/

#include <stdio.h>

int main(void)
{
    int n;
    int num;
    int max;
    int max_count = 0;

    scanf("%d", &n);
    scanf("%d", &max);
    max_count = 1;

    for (int i = 1; i < n; ++i) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
            max_count = 1;
        } else if (num == max) {
            ++max_count;
        }
    }

    printf("%d\n", max_count);
    return 0;
}
