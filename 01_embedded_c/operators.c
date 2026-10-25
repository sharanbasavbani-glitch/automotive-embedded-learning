#include <stdio.h>
int main(void)
{
  int speed = 70;
  int time = 3;
  int dist = speed*time ;
  int speed_limit = 80;
  printf(" the distance travelled %d \n",dist);
  printf(" is vehicle speeding? %d \n",speed>speed_limit);

  return 0;
}

  
