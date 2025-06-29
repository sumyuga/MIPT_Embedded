/*
E15 – Разложить по двум:
Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: 
в одни помещать только положительные, во второй - только отрицательные. 
Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих 
массивов.
Input: 10 целых чисел через пробел
Output: Сперва положительные числа, потом отрицательыне числа, через пробел
*/

#include <stdio.h>

enum {size=10};

void arr_print(int arr[], int size){
     for(int i = 0; i < size; ++i)   
        printf("%d ", arr[i]);
}
int arr_select(int arr[], int size, int arr_combo[]){
    int arr_positive[size];
    int arr_negative[size];
    int i_pos = 0;
    int i_neg = 0;
    for(int i=0; i<size; ++i){
        if(arr[i] > 0)
            arr_positive[i_pos++] = arr[i]; 
        if(arr[i] < 0)
            arr_negative[i_neg++] = arr[i];   
    }
    int idx = 0;
    for(int p=0; p<i_pos; ++p){
        arr_combo[idx++] = arr_positive[p];
    }
    for(int n=0; n<i_neg; ++n){
        arr_combo[idx++] = arr_negative[n];
    }
    return idx;
}
int main(void)
{   
    int arr[size];
    int arr_combo[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        if(n > 500 || n < -500){
            printf("Only numbers from -500 to 500\n");
            return 0;
        }
        arr[i++] = n;
        if(i == size) break;
    }
    int count = arr_select(arr, size, arr_combo);
    arr_print(arr_combo, count);
    printf("\n");
    return 0;
}