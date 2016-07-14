#include <stdio.h>

int main()
{
  int i, nb_robots, taille, poids, puissance_moteur, coefficient, puissance_totale = 0 ;
  scanf("%d", &nb_robots);
  for(i = 0; i < nb_robots; i++ )
  {
    scanf("%d %d %d %d", &taille, &poids, &puissance_moteur, &coefficient);
    puissance_totale += (puissance_moteur+coefficient) * (poids - taille);
  }
  printf("%d\n", puissance_totale);
  return 0;
}
