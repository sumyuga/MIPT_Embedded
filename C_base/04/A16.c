/*
A16 – В порядке возрастания:
Ввести три числа и определить, верно ли, что они вводились в порядке возрастания
Input: Три целых числа
Output: Одно слово YES или NO
*/
#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (c>b && b>a)
    printf("YES \n");
  else
    printf("NO \n");
  return 0;
}
