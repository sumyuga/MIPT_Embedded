/*
A19 – Существует ли треугольник:
Даны стороны треугольника a, b, c. Определить существует ли такой треугольник
Input: Три целых числа. Стороны треугольника a, b, c
Output: YES или NO
*/
#include <stdio.h>

int main(void)
{
  int a, b, c, a_SideCond, b_SideCond, c_SideCond;
  scanf("%d%d%d", &a, &b, &c);
  a_SideCond = (b>a && c>a) && (b>=c+a || c>=b+a);
  b_SideCond = (a>b && c>b) && (a>=c+b || c>=a+b);
  c_SideCond = (a>c && b>c) && (a>=b+c || b>=a+c);
  if ((a==0 || b==0 || c==0) || c_SideCond || b_SideCond || a_SideCond)
    printf("NO \n");
  else
    printf("YES \n");
  return 0;
}
