/*
D6 – Строка наоборот:
Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. 
Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
void reverse_string()
Input: Строка из английских букв и знаков препинания. В конце строки символ точка.
Output: Исходная строка задом наперед.
*/

#include <stdio.h>

void reverse_string(void){
    char c = getchar();
    if(c == '.')
        return;
    reverse_string();
    printf("%c", c);
}

int main(void)
{   
    reverse_string();
    printf("\n");
    return 0;
}
