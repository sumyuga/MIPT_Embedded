/*
E1 – Среднее арифметическое:
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое 
всех элементов массива.
Input: 5 целых не нулевых чисел через пробел
Output: Одно число в формате "%.3f"
*/

#include <stdio.h>

float mean(int arr[], const int Size){
    int sum = 0;
    for(int i=0; i<Size; ++i){
        sum += arr[i];
    }
    return (float)sum/Size;
}

int main(void)
{   
    const int Size=5;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        // if(n == 0){
        //     printf("Error: zero found\n");
        //     return 0;
        // }
        if(n < 0) n = -n;
        arr[i++] = n;
        // if(i >= Size){
        //     printf("Only %d will be computed\n", Size);
        //     break;
        // }
        if(i == Size) break;
    }

    printf("%.3f\n", mean(arr, Size));
    return 0;
}
