/*
D1 – От 1 до N:
Составить рекурсивную функцию, печать всех чисел от 1 до N
Input: Одно натуральное число
Output: Последовательность чисел от 1 до введенного числа
*/

#include <stdio.h>

void printn(int n){
    if(n < 1)
        return;
    printn(n - 1);
    printf("%d ", n);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input");
        return 0;
    }
    printn(n);
    printf("\n");
    return 0;
}
