#include <stdio.h>

int main()
{
  printf("+");
  for (int i = 0; i < 23; i++)
  {
    printf("-")                         ;
  }
  printf("+\n")                         ;
  for (int i = 0; i < 3; i++)
  {
    printf("| o | X | o | X | o | X |") ;
    printf("\n")                        ;
    printf("| X | o | X | o | X | o |") ;
    printf("\n")                        ;
  }
  printf("+")                           ;
  for (int i = 0; i < 23; i++)
  {
    printf("-")                         ;
  }
  printf("+")                           ;
  
  return 0;
}
