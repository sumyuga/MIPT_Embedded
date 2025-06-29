/*
E8 – Инверсия каждой трети:
Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
Input: 12 целых чисел через пробел
Output: 12 целых чисел через пробел
*/

#include <stdio.h>

void print_thirdinverse(int arr[], const int Size){
    int third = Size / 3;
    for(int t = 0; t < 3; ++t) {
        int start = t * third;
        int end = start + third - 1;
        for(int i = end; i >= start; --i) {
            printf("%d ", arr[i]);
        }
    }
}

int main(void)
{   
    const int Size=12;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == Size) break;
    }
    print_thirdinverse(arr, Size);
    printf("\n");
    return 0;
}
