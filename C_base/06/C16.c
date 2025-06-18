/*
С16 – Простое число:
Составить функцию логическую функцию, которая определяет, верно ли, что число простое. 
Используя функцию решить задачу. int is_prime(int n)
Input: Одно целое не отрицательное число
Output: YES или NO
*/

#include <stdio.h>

int is_prime(int n){
    if(n < 2) return 0;
    for(int i=2; i*i<n; ++i){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }

    is_prime(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}
