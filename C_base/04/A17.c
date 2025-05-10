/*
A17 – Время года:
Ввести номер месяца и вывести название времени года
Input: Целое число от 1 до 12 - номер месяца
Output: Время года на английском: winter, spring, summer, autumn
*/
#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);
  if (num==1 || num==2 || num==12)
    printf("winter \n");
  if (num>=3 && num<=5)
    printf("spring \n");
  if (num>=6 && num<=8)
    printf("summer \n");
  if (num>=9 && num<=11)
    printf("autumn \n");
  return 0;
}
