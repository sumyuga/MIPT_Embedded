#include <stdio.h>

int main(void)
{ 
    printf(" A | B | !A->B | A||B \n"); 
    printf("---|---|-------|------\n"); 
    printf(" 0 | 0 |   0   |  0   \n"); 
    printf(" 1 | 0 |   1   |  1   \n"); 
    printf(" 0 | 1 |   1   |  1   \n"); 
    printf(" 1 | 1 |   1   |  1   \n"); 
    return 0; 
}