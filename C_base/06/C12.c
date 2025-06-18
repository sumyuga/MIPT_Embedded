/*
С12 – Sin как сумма ряда:
Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
Input: Одно число от 0 до 90
Output: Вещественное число в формате "%.3f"
*/

#include <stdio.h>
#include <math.h> 

const float PI = 3.1415926535;

float sinus(float x){
    float term = x;
    float sum = term;
    int n = 1;
    while(fabs(term) >= 0.001){
        term = -term*x*x / ((2*n) * (2*n+1));
        sum += term;
        n++;
    }
    return sum;
}

int main(void)
{   
    int deg;
    if(scanf("%d", &deg) != 1 || deg < 0 || deg > 90){
        printf("Error input\n");
        return 0;
    }
    float rad = deg * PI/180.0;
    printf("%.3f\n", sinus(rad));
    return 0;
}
