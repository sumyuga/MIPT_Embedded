/*
D12 – Вывести k раз:
Дана монотонная последовательность, в которой каждое натуральное число k 
встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
Выведите первые n членов этой последовательности.
Input: Натуральное число
Output: Последовательность целых чисел
*/

#include <stdio.h>

void print_seq(int n, int curr, int count){
    if(n == 0)
        return;
    printf("%d ", curr);
    if(count < curr)
        print_seq(n - 1, curr, count + 1);
    else
        print_seq(n - 1, curr + 1, 1);
}


int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 1){
        printf("Error input\n");
        return 0;
    }
    print_seq(n, 1, 1);
    printf("\n");
    return 0;
}
