/*
B10 – Цифры по возрастанию:
Ввести целое число и определить, верно ли,
что все его цифры расположены в порядке возрастания.
Input: Одно целое число
Output: Одно слово YES или NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    if (scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    // if (num == 0){
    //     printf("%d\n", num);
    //     return 0;
    // }
    if (num < 0)
        num = -num;
    
    int prev = num % 10;
    num /= 10;
    for (; num > 0; num /= 10){
        int curr = num % 10;
        if (prev <= curr){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
