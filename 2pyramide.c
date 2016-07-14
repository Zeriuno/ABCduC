#include <stdio.h>

int main()
{
  char filler='+', full;
  int i;
  scanf("%c", &full);
  for(i=0; i < 4; i++)
    printf("%c", filler);
  printf("%c", full);
  for(i=0; i<4; i++)
    printf("%c", filler);
  printf("\n");

  for(i=0; i < 3; i++)
    printf("%c", filler);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  for(i=0; i<3; i++)
    printf("%c", filler);
  printf("\n");

  for(i=0; i < 2; i++)
    printf("%c", filler);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  for(i=0; i<2; i++)
    printf("%c", filler);
  printf("\n");

  for(i=0; i < 1; i++)
    printf("%c", filler);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  for(i=0; i<1; i++)
    printf("%c", filler);
  printf("\n");

  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("%c", full);
  printf("\n");

  return 0;
}
