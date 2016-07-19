#include <stdio.h>

int main()
{
  int compte, villes = 0, hab, seuil= 10000 ;
  scanf("%d", &compte) ;
  for(int i = 0; i < compte ; i++)
  {
    scanf("%d", &hab)  ;
    if(hab > seuil)
    {
      villes++         ;
    }
  }
  printf("%d\n", villes) ;
  return 0             ;
}
