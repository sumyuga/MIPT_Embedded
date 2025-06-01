/*
B20 – Простое число:
Проверить число на простоту.
Input: Натуральное число
Output: Если число является простым напечатать YES, иначе NO
*/
#include <stdio.h>

int main(void)
{
    int num;
    if(scanf("%d", &num) != 1){
        printf("Error input");
        return 0;
    }
    int is_prime = (num > 1);
        for(int i = 2; is_prime && i*i <= num; i++){
            if(num % i == 0){
                is_prime = 0;
                break;
            }
        }
        is_prime ? printf("YES\n") : printf("NO\n");
    return 0;
}
