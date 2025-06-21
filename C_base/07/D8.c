/*
D8 – Числа от A до B:
Составить рекурсивную функцию, Выведите все числа от A до B включительно, 
в порядке возрастания, если A < B, или в порядке убывания в противном случае.
Input: Два целых числа через пробел
Output: Последовательность целых чисел
*/

#include <stdio.h>

void print_range(int a, int b){
    printf("%d ", a);
    if(a == b)
        return;
    if(a < b)
        print_range(a + 1, b);
    else
        print_range(a - 1, b);
}

int main(void)
{   
    int a, b;
    if(scanf("%d %d", &a, &b) != 2){
        printf("Error input\n");
        return 0;
    }
    print_range(a, b);
    printf("\n");
    return 0;
}
