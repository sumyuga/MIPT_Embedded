/*
A11 – Сумма максимума и минимума:
Напечатать сумму максимума и минимума
Input: Пять целых чисел через пробел
Output: Одно целое число - сумма максимума и минимума
*/
#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, max, min;
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  max = a;
  if (b>max) max = b;
  if (c>max) max = c;
  if (d>max) max = d;
  if (e>max) max = e;
  min = a;
  if (b<min) min = b;
  if (c<min) min = c;
  if (d<min) min = d;
  if (e<min) min = e;
  printf("%d \n", max+min);
  return 0;
}
