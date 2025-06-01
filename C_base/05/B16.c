/*
B16 – НОД:
Составить программу для вычисления НОД с помощью алгоритма Евклида. 
Даны два натуральных числа. Найти наибольший общий делитель.
Input: Два неотрицательных целых числа
Output: Одно целое число наибольший общий делитель
*/
#include <stdio.h>

int main(void)
{
    int n1, n2;
    if(scanf("%d %d", &n1, &n2) != 2){
        printf("Error input");
        return 0;
    }
    if(n1 < 0) n1 = -n1;
    if(n2 < 0) n2 = -n2;
    
    while(n2 != 0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    printf("%d\n", n1);

    return 0;
}
