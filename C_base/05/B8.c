/*
B8 – Ровно одна цифра 9:
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
Input: Одно целое число
Output: Одно слово YES или NO
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
    int res, digit = 0;
    for (; num > 0; num /= 10){
        res = num % 10;
        digit += res == 9 ? 1 : 0;
    }
    if (digit == 1){
        printf("YES\n");
        return 0;
    }
    else
        printf("NO\n");
    return 0;
}
