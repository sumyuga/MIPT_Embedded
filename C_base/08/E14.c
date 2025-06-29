/*
E14 – Более одного раза:
Считать массив из 10 элементов и выделить в другой массив все числа, 
которые встречаются более одного раза. В результирующем массиве эти 
числа не должны повторяться
Input: 10 целых чисел через пробел
Output: Целые числа через пробел, которые встречаются более одного 
раза в исходном массиве
*/

#include <stdio.h>

enum {size=10};

void arr_print(int arr[], int size){
     for(int i = 0; i < size; ++i)   
        printf("%d ", arr[i]);
}
int arr_select(int arr[], int size, int arr_sel[]){
    int idx = 0, bingo;
    for(int i=0; i<size; ++i){
        for(int j=i+1; j<size; ++j){
            if(arr[i] == arr[j]){
                bingo = 0;
                for(int k=0; k<idx; ++k){
                    if(arr_sel[k] == arr[i]){
                        bingo = 1;
                        break;
                    }
                }
                if(!bingo){
                    arr_sel[idx++] = arr[i];
                }
                break;
            }
        }
    }
    return idx;
}

int main(void)
{   
    int arr[size];
    int arr_sel[size];
    int n, i=0;
    while(scanf("%d", &n) == 1){
        arr[i++] = n;
        if(i == size) break;
    }
    int count = arr_select(arr, size, arr_sel);
    arr_print(arr_sel, count);
    printf("\n");
    return 0;
}