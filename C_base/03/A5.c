#include <stdio.h>

int main(void)
{
    int a, b, c;
    float result, div=3;
    scanf("%d%d%d", &a, &b, &c);
    result = (a+b+c)/div;
    printf("%.2f\n", result);  
    return 0;
}