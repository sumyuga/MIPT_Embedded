/*
С15 – Цифры по возрастанию:
Составить логическую функцию, которая определяет, верно ли, 
что в заданном числе все цифры стоят по возрастанию. 
Используя данную функцию решить задачу. int grow_up(int n)
Input: Одно целое не отрицательное число
Output: YES или NO
*/

#include <stdio.h>

int grow_up(int n){
    int prev = n % 10;
    int all_same = 1;
    n /= 10;
    if(n == 0)
        return 1;
    while(n > 0){
        int curr = n % 10;
        if(curr > prev)
            return 0;
        if(curr != prev)
            all_same = 0;
        prev = curr;
        n /= 10;
    }
    if(all_same)
        return 0;
    return 1;
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    grow_up(n) ? printf("YES\n") : printf("NO\n");
    return 0;
}
