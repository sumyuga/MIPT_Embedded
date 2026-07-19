/*
C2 - Польская запись
Необходимо вычислить выражение написанное в обратной польской записи.
На вход подаётся строка состоящая из целых, неотрицательных чисел и арифметических
символов. В ответ единственное целое число - результат.
Example:
Input: 3 4 +.
Output: 7
*/

#include <stdio.h>

int main(void)
{
    int stack[10000];
    int top = 0;
    int number = 0;
    int has_number = 0;
    int c;

    while ((c = getchar()) != EOF && c != '.') {
        if (c >= '0' && c <= '9') {
            number = number * 10 + c - '0';
            has_number = 1;
        } else {
            if (has_number) {
                stack[top] = number;
                top++;
                number = 0;
                has_number = 0;
            }

            if (c == '+' || c == '-' || c == '*' || c == '/') {
                int second = stack[top - 1];
                top--;

                switch (c) {
                    case '+':
                        stack[top - 1] += second;
                        break;
                    case '-':
                        stack[top - 1] -= second;
                        break;
                    case '*':
                        stack[top - 1] *= second;
                        break;
                    case '/':
                        stack[top - 1] /= second;
                        break;
                }
            }
        }
    }

    if (has_number) {
        stack[top] = number;
    }

    printf("%d\n", stack[0]);
    return 0;
}
