/*
B17 – Счастливые числа:
Ввести натуральное число и напечатать все числа от 10 до введенного числа
- у которых сумма цифр равна произведению цифр
Input: Одно натуральное число большее 10
Output: Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. 
Не превосходящие введенное число.
*/
#include <stdio.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1 || num <= 10){
        printf("Error input");
        return 0;
    }
    for(int i = 10; i <= num; i++){
        int temp = i;
        int mult = 1;
        int sum = 0;
        while(temp){
            int digit = temp % 10;
            mult *= digit;
            sum += digit;
            temp /= 10;
        }
        if(mult == sum)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
