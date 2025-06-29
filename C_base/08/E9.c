/*
E9 – Циклический сдвиг вправо:
Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
Input: 10 целых чисел через пробел
Output: 10 целых чисел через пробел сдвинутых вправо на 1 элемент циклически
*/

#include <stdio.h>

void print_rightcyclebias(int arr[], const int Size){
    int last = arr[Size-1];
    for(int i = Size-1; i > 0; --i)
        arr[i] = arr[i-1];
    arr[0] = last;
    for(int i = 0; i < Size; ++i)
        printf("%d ", arr[i]);
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
    print_rightcyclebias(arr, Size);
    printf("\n");
    return 0;
}
