/*
E13 – Вторая с конца ноль:
Считать массив из 10 элементов и отобрать в другой массив все числа, 
у которых вторая с конца цифра (число десятков) – ноль.
Input: 10 целых чисел через пробел
Output: Целые числа через пробел, у котороых вторая с конца цифра - ноль
*/

#include <stdio.h>
#include <stdlib.h>

enum {size=10};

void arr_print(int arr[], int size){
     for(int i = 0; i < size; ++i)   
        printf("%d ", arr[i]);
}
int arr_select(int arr[], int size, int arr_sel[]){
    int idx = 0;
    for(int i=0; i<size; ++i){
        if((abs(arr[i]) / 10) % 10 == 0)
            arr_sel[idx++] = arr[i];
    }
    return idx;
}

int main(void)
{   
    int arr[size];
    int arr_sel[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == size) break;
    }
    int count = arr_select(arr, size, arr_sel);
    arr_print(arr_sel, count);
    printf("\n");
    return 0;
}