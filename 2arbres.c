#include <stdio.h>

int main()
{
  int metres, folioles ;
  scanf("%d %d", &metres, &folioles) ;
  if((metres < 5) && (folioles > 8))
    printf("Tinuviel\n")   ;
  if((metres > 10) && (folioles > 10))
    printf("Calaelen\n")   ;
  if((metres < 8) && (folioles < 5))
    printf("Falarion\n")   ;
  if((metres > 12) && (folioles < 7))
    printf("Dorthonion\n") ;
  return 0 ;
}
