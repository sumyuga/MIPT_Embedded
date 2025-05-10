/*
A14 – Максимальная цифра:
Дано трёхзначное число, напечатать макисмальную цифру
Input: Целое положительное трёхзначное число
Output: Одна цифра
*/
#include <stdio.h>

int main(void)
{
  int num, maxDigit, a, b, c;
  scanf("%d", &num);
  a = num/100;
  b = (num/10)%10;
  c = num%10;
  maxDigit = a;
  if (b > maxDigit) maxDigit = b;
  if (c > maxDigit) maxDigit = c;
  printf("%d \n", maxDigit);
  return 0;
}
