/*
B9 – Все цифры чётные:
Ввести целое число и определить, верно ли, что все его цифры четные.
Input: Одно целое число
Output: Одно слово YES или NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    if (scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    if (num == 0){
        printf("%d\n", num);
        return 0;
    }
    if (num < 0)
        num = -num;

    for (; num > 0; num /= 10){
        if ((num % 10) & 1){ // Побитовое "И" для проверки на нечётность
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
