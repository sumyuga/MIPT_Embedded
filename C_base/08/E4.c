/*
E4 – Два максимума:
Считать массив из 10 элементов и найти в нем два максимальных элемента и 
напечатать их сумму.
Input: 10 целых чисел через пробел
Output: Сумма двух максимальных элементов
*/

#include <stdio.h>

// void print_sum2max(int arr[], const int Size){
//     int a_max = arr[0];
//     int i_max = 0;
//     for(int i=1; i<Size; ++i){
//         if(arr[i] > a_max){
//             a_max = arr[i];
//             i_max = i;
//         }
//     }
//     int start = (i_max == 0) ? 1 : 0;
//     int b_max = arr[start];
//     for(int i=0; i<Size; ++i){
//         if(i != i_max && arr[i] > b_max)
//             b_max = arr[i];
//     }
//     printf("%d\n", a_max+b_max);
// }

void ab_swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}
void print_sum2max(int arr[], int Size) {
    int max1 = arr[0], max2 = arr[1];
    if (max2 > max1) {
        ab_swap(max1, max2);
    }
    for (int i = 2; i < Size; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    printf("%d\n", max1 + max2);
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
    print_sum2max(arr, Size);
    return 0;
}
