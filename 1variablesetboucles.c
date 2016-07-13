#include <stdio.h>

int main()
{
  int nombreNoix = 0       ;
  int distanceParcourue= 0 ;
  int i                    ;

  for(i = 0 ; i < 9 ; i++)
  {
    printf("À %d km j'ai %d noix\n", distanceParcourue, nombreNoix) ;
    distanceParcourue += 1 ;
    nombreNoix += 3        ;
  }
  return 0 ;
}
