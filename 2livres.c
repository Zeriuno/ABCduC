#include <stdio.h>

int main()
{
  double argent, prix ;
  int livres          ;
  scanf("%lf %lf", &argent, &prix) ;
  livres = (int) argent/prix       ;
  printf("%d\n", livres)             ;
  return 0;
}
