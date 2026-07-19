/*
C0 - Вычеркивание
Сколько различных трёхзначных чисел можно получить из заданного натурального N,
вычёркивая цифры из его десятичной записи?
Example:
Input: 1111111111111111111111111
Output: 1
*/

#include <stdio.h>

int main(void)
{
    char first[10] = {0};
    char pair[10][10] = {0};
    char number[10][10][10] = {0};
    int count = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        int digit = c - '0';

        for (int i = 1; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (pair[i][j] && !number[i][j][digit]) {
                    number[i][j][digit] = 1;
                    ++count;
                }
            }
        }

        for (int i = 1; i < 10; ++i) {
            if (first[i]) {
                pair[i][digit] = 1;
            }
        }

        if (digit != 0) {
            first[digit] = 1;
        }
    }

    printf("%d\n", count);
    return 0;
}
