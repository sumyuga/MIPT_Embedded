/*
A18 – Ebove, Less, Equal:
Ввести два числа. Если первое число больше второго, то программа печатает слово Above. 
Если первое число меньше второго, то программа печатает слово Less. 
А если числа равны, программа напечатает сообщение Equal
Input: Два целых числа
Output: Одно единственное слово: Above, Less, Equal
*/
#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d%d", &a, &b);
  if (a>b)
    printf("Above \n");
  else if (a<b)
    printf("Less \n");
  else
    printf("Equal \n");
  return 0;
}
