# include <stdio.h>

int main()
{
  int i, joueurs, poids=0, equipe1=0, equipe2=0 ;

  scanf("%d", &joueurs) ;
  for(i = 0 ; i < joueurs ; i++)
  {
    scanf("%d", &poids) ;
    equipe1 += poids    ;
    scanf("%d", &poids) ;
    equipe2 += poids    ;
  }
  if(equipe1 > equipe2)
  {
    printf("L'équipe 1 a un avantage\n") ;
	  }
  else
  {
    printf("L'équipe 2 a un avantage\n") ;
  }
  printf("Poids total pour l'équipe 1 : %d\n", equipe1) ;
  printf("Poids total pour l'équipe 2 : %d\n", equipe2) ;
  return 0 ;
}

