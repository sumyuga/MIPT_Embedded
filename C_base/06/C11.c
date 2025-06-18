/*
С11 – НОД:
Составить функцию, которая определяет наибольший общий делитель 
двух натуральных и привести пример ее использования. int nod(int a, int b)
Input: Два целых положительных числа
Output: Одно целое число - наибольший общий делитель
*/

#include <stdio.h>

unsigned int nod(int a, int b){ 
    while(b != 0){
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void)
{   
    int a, b;
    if(scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1){
        printf("Error input\n");
        return 0;
    }

    printf("%d\n", nod(a, b));
    return 0;
}
