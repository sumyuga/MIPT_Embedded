/*
E19 – Цифры по возрастанию:
Вывести в порядке следования цифры, входящие в десятичную запись 
натурального числа N.
Input: Одно натуральное число N
Output: Цифры через пробел
*/

#include <stdio.h>

void print_follow(int n){
    int digits[20];
    int len = 0;
    int tmp = n;
    while(tmp > 0){
        digits[len++] = tmp % 10;
        tmp /= 10;
    }
    for(int i=len-1; i>=0; --i)
        printf("%d ", digits[i]);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1){
        printf("Error input\n");
        return 0;
    }
    print_follow(n);
    printf("\n");
    return 0;
}