#include<stdio.h>
#include<stdlib.h>

int main()
{
  float c,f;
  printf("input the temperature in Fahrenheits");
  scanf("%f",&f);

  c=(f-32)*5/9;

  printf("celcius value is:%2f",c);

  return 0;
}
