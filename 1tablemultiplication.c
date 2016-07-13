#include <stdio.h>

int main()
{
  int multiplie = 8 ;
  int i             ;
  for(i = 0 ; i < 11 ; i++)
  {
    printf("%dx%d = %d\n", i, multiplie, multiplie*i);
  }
  return 0 ;
}
