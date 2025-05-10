/*
A15 – Уравнение прямой:
Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b
Input: Четыре целых числа через пробел. Координаты X1 Y1 X2 Y2
Output: Два числа K,B в формате "%.2f %.2f"
*/
#include <stdio.h>

int main(void)
{
  int x1, y1, x2, y2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  double k = (double)(y2 - y1) / (x2 - x1);
  double b = y1 - k * x1;
  printf("%.2f %.2f \n", k, b);
  return 0;
}
