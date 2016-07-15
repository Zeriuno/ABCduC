#include <stdio.h>

int main()
{
  int heure, i, prix = 10 ;

  scanf("%d", &heure)  ;
  for(i = 0 ; i < heure ; i++)
  {
    prix += 5          ;
  }
  if(prix > 53 )
    prix = 53          ;
  printf("%d\n", prix)   ;
  return 0 ;
}
