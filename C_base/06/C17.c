/*
С17 – Сумма цифр равна произведению:
Составить логическую функцию, которая определяет, верно ли, что 
в заданном числе сумма цифр равна произведению. int is_happy_number(int n)
Input: Целое не отрицательное число
Output: YES или NO
*/

#include <stdio.h>

int is_happy_number(int n){
    int sum = 0;
    int multi = 1;
    while(n>0){
        sum += n%10;
        multi *= n%10;
        n /= 10;
    }
    if(sum == multi)
        return 1;
    return 0;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    is_happy_number(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}
