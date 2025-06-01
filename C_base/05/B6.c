/*
B6 – Две одинаковые цифры:
Ввести целое число и определить, верно ли, 
что в его записи есть две одинаковые цифры, стоящие рядом.
Input: Одно целое число
Output: Единственное слово: YES или NO
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1){
        printf("Error input\n");
        return 0;
    }
    if (num < 0)
        num = -num;
    int res;
    res = 0;
    while (num > 0){
    // Обычная запись if-else
        // if (res == (num % 10)){
        //     printf("YES\n");
        //     return 0;
        // }
        // res = num % 10;
    
    // Альтернативная запись через тернарный оператор и функцию exit() – необходимо подключить заголовочном файле <stdlib.h>
    (res == (num % 10))
        ? (printf("YES\n"), exit(0))
        : (res = num % 10);
        num /= 10;
    }
    printf("NO\n");
    return 0;
}
