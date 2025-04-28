#include <stdio.h>

int main(void)
{
    int a, result;
    scanf("%d", &a);
    result = a/100;
    result *= (a-(a/100*100))/10;
    result *= (a-(a/100*100))%10;
    printf("%d\n", result);  
    return 0;
}