/*
B19 – Сумма цифр равна 10:
Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
Input: Натуральное число
Output: YES или NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1){
        printf("Error input");
        return 0;
    }
    int sum = 0;
    while(num){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    if(sum == 10)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
