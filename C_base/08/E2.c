/*
E2 – Найти минимум:
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
Input: 5 целых чисел через пробел
Output: Одно единственное целое число
*/

#include <stdio.h>

void print_min(int arr[], const int Size){
    int min = arr[0];
    for(int i=1; i<Size; ++i){
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%d\n", min);
}

int main(void)
{   
    const int Size=5;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == Size) break;
    }
    print_min(arr, Size);
    return 0;
}
