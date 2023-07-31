#include<stdio.h>
#include<stdlib.h>

int main()
{
  float dist,time;
  float avgspeed;

  printf("enter the distance");
  scanf("%f",&dist);

  printf("enter the time");
  scanf("%f",&time);

  avgspeed=dist/time;

  printf("average speed is:%.2fms-1",avgspeed);

  return 0;
}
