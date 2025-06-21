/*
D15 – Найти наибольшее:
Дана последовательность ненулевых целых чисел, завершающаяся цифрой 0. 
Ноль в последовательность не входит. Определите наибольшее значение числа 
в этой последовательности. Для решения задачи необходимо написать 
рекурсивную функцию вида: int max_find(int max)
Input: Последовательность не нулевых целых чисел. В конце последовательности цифра 0
Output: Одно число. Максимум последовательности
*/

#include <stdio.h>

int max_find(int max){
    int n;
    if(scanf("%d", &n) != 1){
        printf("Error input\n");
        return max;
    }
    if(n == 0)
        return max;
    if(n > max)
        max = n;
    return max_find(max);
}

int main(void)
{   
    int first;
    if(scanf("%d", &first) != 1){
        printf("Error input\n");
        return 0;
    }
    printf("%d\n", max_find(first));
    return 0;
}
