/*
B7 – Две одинаковые цифры не рядом:
Ввести целое число и определить, верно ли, 
что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.
Input: Одно целое число
Output: Одно слово: YES или NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    if (num < 0)
        num = -num;
    int digit, temp;
    while (num > 0){
        digit = num % 10;
        temp = num / 10;
        while (temp > 0){
            if ((temp % 10) == digit){
                printf("YES\n");
                return 0;
            }
            temp /= 10;
        }
        num /= 10;
    }
    printf("NO\n");
    return 0;
}
