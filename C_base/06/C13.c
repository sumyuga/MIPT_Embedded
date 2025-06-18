/*
С13 – Cos как сумма ряда:
Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
Input: Одно число от 0 до 90
Output: Вещественное число в формате "%.3f"
*/

#include <stdio.h>
#include <math.h> 

const float PI = 3.1415926535;

float cosinus(float x){
    float term = 1.0;
    float sum = term;
    int n = 1;
    while(fabs(term) >= 0.001){
        term = -term*x*x / ((2*n-1) * (2*n));
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
    printf("%.3f\n", cosinus(rad));
    return 0;
}
