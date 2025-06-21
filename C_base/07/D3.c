/*
D3 – В обратном порядке:
Дано целое не отрицательное число N. Выведите все его цифры по одной, 
в обратном порядке, разделяя их пробелами или новыми строками.
Input: Одно не отрицательное целое число
Output: Последовательность цифр введенного числа в обратном порядке через пробел
*/

#include <stdio.h>

void num_digits(int n){
    if(n < 10){
        printf("%d", n);
        return;
    }
    printf("%d ", n % 10);
    num_digits(n / 10);
}

int main(void)
{   
    int n;
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Error input\n");
        return 0;
    }
    num_digits(n);
    printf("\n");
    return 0;
}
