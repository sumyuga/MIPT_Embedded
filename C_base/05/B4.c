/*
B4 – Ровно три цифры:
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
Input: Целое положительное число
Output: Одно слов: YES или NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    1<=num/100 && num/100<=9 ? printf("YES\n") : printf("NO\n");
    return 0;
}
