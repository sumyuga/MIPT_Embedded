/*
E11 – Отсортировать по последней цифре:
Считать массив из 10 элементов и отсортировать его по последней цифре.
Input: 10 целых чисел через пробел
Output: Этот же массив отсортированный по последней цифре
*/

#include <stdio.h>

void print_sortlastdigit(int arr[], const int Size){
    int arrsort[Size];
    for(int i=0; i<Size; ++i){
        arrsort[i] = arr[i];
    }
    for(int t=0; t<Size; ++t){
        int min_idx = t;
        for(int i=t+1; i<Size; ++i){
            if(arrsort[i] % 10 < arrsort[min_idx] % 10){
                min_idx = i;
            }
        }
        int tmp = arrsort[t];
        arrsort[t] = arrsort[min_idx];
        arrsort[min_idx] = tmp;
    }
    for(int i=0; i<Size; ++i){
        printf("%d ", arrsort[i]);
    }
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
    print_sortlastdigit(arr, Size);
    printf("\n");
    return 0;
}
