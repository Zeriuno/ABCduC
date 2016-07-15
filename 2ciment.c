#include <stdio.h>

int main()
{
  double ciment                  ;
  int kilosac = 60, prixsac = 45 ;
  scanf("%lf", &ciment)          ;
  int cout = (int) (ciment / kilosac +1) * prixsac;
  printf("%d\n", cout);
  return 0;
}
