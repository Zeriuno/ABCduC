#include <stdio.h>

int main()
{
  double ciment                     ;
  int kilosac = 60, prixsac = 45, sacs ;
  scanf("%lf", &ciment)             ;
  sacs = (int) ciment / kilosac +1  ;
  printf("%d\n", sacs*prixsac)      ;
  return 0;
}
