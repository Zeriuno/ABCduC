#include<stdio.h>

int main()
{
  int nbIngred, i                         ;
  double poidsIngred[10], prixIngred[10], tot = 0 ;
  scanf("%d", &nbIngred)                  ;
  for(i = 0 ; i < nbIngred ; i++)
  {
    scanf("%lf", &prixIngred[i])          ;
  }
  for(i = 0 ; i < nbIngred ; i++)
  {
    scanf("%lf", &poidsIngred[i])         ;
    tot += poidsIngred[i] * prixIngred[i] ;
  }
  printf("%lf\n", tot) ;
  return 0 ;
}
