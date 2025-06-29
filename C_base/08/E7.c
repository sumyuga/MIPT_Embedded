/*
E7 – Инверсия половин:
Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 
2-ой половин массива. Необходимо изменить считанный массив и напечатать 
его одним циклом.
Input: 10 целых элементов массива через пробел
Output: 10 целых элементов массива через пробел
*/

#include <stdio.h>

void print_halfinverse(int arr[], const int Size){
    for(int i=(Size/2)-1; i>=0; --i){
        printf("%d ", arr[i]);
    }
    for(int i=(Size)-1; i>=Size/2; --i){
        printf("%d ", arr[i]);
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
    print_halfinverse(arr, Size);
    printf("\n");
    return 0;
}
