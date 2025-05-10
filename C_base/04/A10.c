/*
A10 – Наименьшее из пяти чисел:
Ввести пять чисел и найти  наименьшее из них
Input: Пять целых чисел через пробел
Output: Одно наименьшее целое число
*/
#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, min;
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  min = a;
  if (b<min) min = b;
  if (c<min) min = c;
  if (d<min) min = d;
  if (e<min) min = e;
  printf("%d \n", min);
  return 0;
}
