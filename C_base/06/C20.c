/*
С20 – Скобки:
Проверить строку состоящую из скобок "(" и ")" на корректность.
Input: На вход подается строка состоящая из символов '(', ')' 
и заканчивающаяся символом '.'. Размер строки не более 1000 символов
Output: Необходимо напечатать слово YES если скобки расставлены верно 
и NO в противном случае
*/

#include <stdio.h>

int main(void)
{   
    char c;
    int balance = 0, i = 0;
    while(scanf("%c", &c) == 1 && c != '.'){
        i++;
        if(i>1000){
            printf("Too long\n");
            return 0;
        }
        if(c == '(')
            balance++;
        else if(c == ')')
            balance--;
        if(balance < 0){
            printf("NO\n");
            return 0;
        } 
    }

    balance == 0 ? printf("YES\n") : printf("NO\n");
    
    return 0;
}
