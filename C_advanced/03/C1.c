/*
C1 - Префикс и суффикс
На стандартном потоке ввода задаются две символьные строки, разделённые символом
перевода строки. Каждая из строк не превышает по длине 10000 символов.
В строках не встречаются пробельные символы. На стандартный поток вывода напечатайте
два числа, разделённых пробелом: первое число — длина наибольшего префикса первой строки,
являющегося суффиксом второй; второе число — наоборот, длина наибольшего суффикса первой строки,
являющегося префиксом второй. Сравнение символов проводите с учётом регистра
(т.е. символы 'a' и 'A' различны).
Example:
Input: don't_panic
       nick_is_a_mastodon
Output: 3 3
*/

#include <stdio.h>
#include <string.h>

int overlap(char first[], char second[])
{
    int first_length = strlen(first);
    int second_length = strlen(second);
    int max_length = first_length;

    if (second_length < max_length) {
        max_length = second_length;
    }

    for (int length = max_length; length > 0; --length) {
        if (strncmp(first, second + second_length - length, length) == 0) {
            return length;
        }
    }

    return 0;
}

int main(void)
{
    char first[10002] = "";
    char second[10002] = "";

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    printf("%d %d\n", overlap(first, second), overlap(second, first));
    return 0;
}
