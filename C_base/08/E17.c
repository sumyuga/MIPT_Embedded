/*
E17 – Только один раз:
Дан массив из 10 элементов. В массиве найти элементы, которые в нем 
встречаются только один раз, и вывести их на экран.
Input: 10 целых чисел через пробел
Output: Элементы которые встречаются только один раз через пробел
*/

#include <stdio.h>

enum {size=10};

void print_onlyone(int arr[], int size){
    int onlyone;
    for(int i=0; i<size; ++i){
        onlyone = 1;
        for(int j=0; j<size; ++j){
            if(arr[i] == arr[j] && i != j){
                onlyone = 0;
                break;
            }
        }
        if(onlyone)
            printf("%d ", arr[i]);
    }
}
int main(void)
{   
    int arr[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == size) break;
    }
    print_onlyone(arr, size);
    printf("\n");
    return 0;
}