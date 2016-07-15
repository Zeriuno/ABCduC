#include <stdio.h>

int main()
{
  int nbnotes, somme = 0, i, note ;
  double sommevirgule           ;
  scanf("%d", &nbnotes)           ;
  for(i = 0 ; i < nbnotes; i++)
  {
    scanf("%d", &note)            ;
    somme += note                 ;
  }
  sommevirgule = (double) somme   ;
  printf("%.2lf\n", sommevirgule/nbnotes);
  return 0 ;
}
