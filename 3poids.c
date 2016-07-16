#include <stdio.h>
int main()
{
  int nbWagons, i                    ;
  double train[50], tot = 0, charge  ;
  scanf("%d", &nbWagons)             ;
  for(i = 0 ; i < nbWagons ; i++)
  {
    scanf("%lf", &train[i]) ;
    tot += train[i]         ;
  }
  charge = tot / nbWagons   ;
  for(i = 0 ; i < nbWagons ; i++)
  {
    printf("%.1lf\n", charge - train[i]) ;
  }
  return 0 ;
}
