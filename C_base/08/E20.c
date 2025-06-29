/*
E20 – Составить наибольшее число:
Переставить цифры в числе так, что бы получилось максимальное число.
Input: Одно целое не отрицательное число
Output: Целое не отрицательное число
*/

#include <stdio.h>

void arr_swap(int arr[], int i, int j){
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
void sort_bubble(int arr[], int size){
    int noswap;
    for(int i=0; i<size; ++i){
        noswap = 1;
        for(int j=size-1; j>i; --j){
            if(arr[j] < arr[j-1]){
                arr_swap(arr, j-1, j);
                noswap = 0;
            }
        }
        if(noswap)
            break;
    }
}
int make_largest(int n){
    int digits[20], len = 0;
    int numest = 0;
    while(n > 0){
        digits[len++] = n % 10;
        n /= 10;
    }
    sort_bubble(digits, len);
    for(int i=len-1; i>=0; --i){
        numest *= 10;
        numest += digits[i];
    }
    return numest;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", make_largest(n));
    return 0;
}