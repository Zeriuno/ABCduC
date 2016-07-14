#include <stdio.h>

int main()
{
  double fahrenheit, celsius ;

  scanf("%lf", &celsius)             ;
  fahrenheit = celsius * 9.0/5.0 +32 ;
  printf("%.1lf", fahrenheit)        ;
  return 0;
}
