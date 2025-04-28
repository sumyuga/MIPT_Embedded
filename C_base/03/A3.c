#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Введите три числа:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Результат суммы трёх чисел: %d", a + b + c);  
    return 0;
}