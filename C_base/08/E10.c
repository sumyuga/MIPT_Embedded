/*
E10 – Циклический сдвиг вправо на 4:
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 
4 элемента.
Input: 12 целых чисел через пробел
Output: 12 целых чисел через пробел
*/

#include <stdio.h>

void print_rightcyclebias(int arr[], const int Size, int elements){
    int arrbiased[Size];
    for(int i=0; i<elements; ++i)
        arrbiased[i] = arr[Size-elements+i];
    for(int i=0; i<Size-elements; ++i)
        arrbiased[elements+i] = arr[i];
    for(int i = 0; i < Size; ++i)
        printf("%d ", arrbiased[i]);
}

int main(void)
{   
    const int Size=12;
    int elements=4;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == Size) break;
    }
    print_rightcyclebias(arr, Size, elements);
    printf("\n");
    return 0;
}
