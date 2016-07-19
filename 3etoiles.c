#include <stdio.h>

int main()
{
  int taille, i, j     ;
  scanf("%d", &taille) ;
  taille++ ;
  for(i = 0 ; i < taille ;  i++)
  {
    for(j = 0 ; j < taille ; j++)
    {
      printf("*") ;
    }
    printf("\n")  ;
  }
  return 0 ;
}
