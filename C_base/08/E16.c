/*
E16 – Чаще всего:
Дан массив из 10 элементов. Определить, какое число в массиве 
встречается чаще всего. Гарантируется, что такое число ровно 1.
Input: 10 целых чисел через пробел
Output: Одно число, которое встречается чаще других
*/

#include <stdio.h>

enum {size=10};

int most_frequent(int arr[], int size){
    int num, qty, max_qty = 1;
    for(int i=0; i<size; ++i){
        qty = 1;
        for(int j=i+1; j<size; ++j){
            if(arr[i] == arr[j])
                qty++;
        }
        if(qty > max_qty){
            max_qty = qty;
            num = arr[i];
        }
    }
    return num; 
}
int main(void)
{   
    int arr[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == size) break;
    }
    printf("%d", most_frequent(arr, size));
    printf("\n");
    return 0;
}