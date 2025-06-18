/*
С9 – Факториал:
Составить функцию вычисления N!. 
Использовать ее при вычислении факториала int factorial(int n)
Input: Целое положительное число не больше 20
Output: Целое положительное число
*/

#include <stdio.h>

unsigned long factorial(int n){
    int i = 1;
    unsigned long res = 1;
    while(i++ < n){
        res *= i;
    }
    return res;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n > 20){
        printf("Error input\n");
        return 0;
    }

    printf("%lu\n", factorial(n));
    return 0;
}
