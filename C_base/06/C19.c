/*
С19 – Сумма цифр в тексте:
Составить функцию, которая преобразует текущий символ цифры в число. 
Написать программу считающую сумму цифр в тексте. 
int digit_to_num(char c)
Input: Строка состоящая из английских букв, пробелов, знаков препинания. 
В конце строки символ точка.
Output: Целое число - сумма цифр в тексте
*/

#include <stdio.h>

int digit_to_num(char c){
    if(c >= '0' && c <= '9'){
        return (c - '0');
    }
    return 0;
}

int main(void)
{   
    char c;
    int sum = 0;
    while(scanf("%c", &c) == 1 && c != '.'){
        sum += digit_to_num(c);    
    }
    printf("%d\n", sum);
    return 0;
}
