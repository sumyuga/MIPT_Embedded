/*
E6 – Среднее арифметическое 2:
Считать массив из 12 элементов и посчитать среднее арифметическое 
элементов массива.
Input: 12 целых чисел через пробел
Output: Среднее арифметическое в формате "%.2f"
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
    const int Size=12;
    int arr[Size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        // if(i >= Size){
        //     printf("Only %d will be computed\n", Size);
        //     break;
        // }
        if(i == Size) break;  
    }

    printf("%.2f\n", mean(arr, Size));
    return 0;
}
