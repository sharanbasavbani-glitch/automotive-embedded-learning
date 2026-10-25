#include <stdio.h>
int main(void)
{
  int speed = 80;
  float voltage = 12.6;
  char gear = 'D';

  printf("the vehicle speed is %d km/h \n",speed);
  printf("the battery voltage is %.1f V\n",voltage);
  printf("the current gear is %c\n",gear);

  return 0;
}
