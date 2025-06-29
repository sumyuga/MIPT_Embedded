/*
E3 – Максимум и минимум и их номера:
Считать массив из 10 элементов и найти в нем максимальный и 
минимальный элементы и их номера.
Input: 10 целых чисел через пробел
Output: 4 целых числа через пробел: номер максимума, 
максимум, номер минимума, минимум
*/

#include <stdio.h>

void print_minmax(int arr[], const int Size){
    int min = arr[0];
    int max = arr[0];
    int i_min = 1, i_max = 1;
    for(int i=1; i<Size; ++i){
        if(arr[i] < min){
            min = arr[i];
            i_min = i+1;
        }
        else if(arr[i] > max){
            max = arr[i];
            i_max = i+1;
        }
    }
    printf("%d %d %d %d\n", i_max, max, i_min, min);
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
    print_minmax(arr, Size);
    return 0;
}
