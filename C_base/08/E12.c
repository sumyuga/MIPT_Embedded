/*
E12 – По возрастанию и по убыванию:
Считать массив из 10 элементов и отсортировать первую половину по 
возрастанию, а вторую – по убыванию.
Input: 10 целых чисел через пробел
Output: Исходный массив. Первая часть отсортирована по возрастанию, 
вторая половина по убыванию
*/

#include <stdio.h>

enum {size=10};

void arr_swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void arr_print(int arr[]){
     for(int i = 0; i < size; ++i)   
        printf("%d ", arr[i]);
}
void sort_bubble(int arr[], int begin, int end, int by){
    int noswap;
    for(int i=begin; i<end; ++i){
        noswap = 1;
        for(int j=end-1; j>i; --j){
            if((by == 1 && arr[j] < arr[j-1]) || (by == -1 && arr[j] > arr[j-1])){
                arr_swap(arr, j-1, j);
                noswap = 0;
            }
        }
        if(noswap)
            break;
    }
}
void arr_sort(int arr[], int size){
    int asc = 1, desc = -1;
    int half = size / 2;
    sort_bubble(arr, 0, half, asc);
    sort_bubble(arr, half, size, desc);
}

int main(void)
{   
    int arr[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == size) break;
    }
    arr_sort(arr, size);
    arr_print(arr);
    printf("\n");
    return 0;
}