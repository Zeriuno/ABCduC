#include<stdio.h>

int main()
{
  int recette[10], i, j      ;
  for(i = 0 ; i < 10 ; i++)
  {
    scanf("%d", &recette[i]) ;
  }
  scanf("%d", &j)            ;
  printf("%d\n", recette[j]) ;
  return 0                   ;
}
