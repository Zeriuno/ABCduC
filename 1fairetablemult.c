#include <stdio.h>

int main()
{
  int i, multiplie ;

  scanf("%d", &multiplie) ;
  for(i=0 ; i < 11 ; i++)
  {
    printf("%dx%d = %d\n", i, multiplie, i*multiplie) ;
  }
  return 0;
}

