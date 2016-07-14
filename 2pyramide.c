#include <stdio.h>

int main()
{
  char filler='+', full;
  int ifill =4, ilarg = 9, ifull = 1, increment = 2, i, j;
  scanf("%c", &full);

  for(j=0; j< (ilarg+1)/increment; j++)
  {
    for(i=0; i < ifill; i++)
      printf("%c", filler);
    for(i=0; i< ifull; i++)
      printf("%c", full);
    for(i=0; i<ifill; i++)
      printf("%c", filler);
    printf("\n");
    ifull +=increment;
    ifill = (ilarg - ifull)/2;
  }

  return 0;
}
