/*
С14 – Сумма цифр четна:
Составить логическую функцию, которая определяет, верно ли, 
что сумма его цифр – четное число. Используя эту функцию решить задачу
Input: Одно целое не отрицательное число
Output: YES или NO
*/

#include <stdio.h>

int is_sum_even(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if((sum & 1) == 0)
        return 1;
    return 0;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    is_sum_even(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}
