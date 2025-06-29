/*
E5 – Сумма положительных элементов:
Считать массив из 10 элементов и посчитать сумму положительных 
элементов массива.
Input: 10 целых чисел через пробел
Output: Одно целое число - сумма положительных элементов массива
*/

#include <stdio.h>

void print_sumpositive(int arr[], const int Size){
    int sum = 0;
    for(int i=0; i<Size; ++i){
        if(arr[i] > 0)
            sum += arr[i];
    }
    printf("%d\n", sum);
}

int main(void)
{   
    const int Size=10;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == Size) break;
    }
    print_sumpositive(arr, Size);
    return 0;
}
