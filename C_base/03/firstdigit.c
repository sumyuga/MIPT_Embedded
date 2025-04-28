#include <stdio.h>

int main(void)
{
    int k;
    float x;
    printf("Enter real positive number: ");
    scanf("%f", &x);
    k = 10*(x-(int)x);
    printf("First digit after point: %d\n", k);
    return 0;
}
