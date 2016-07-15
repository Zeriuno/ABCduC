#include <stdio.h>

int main()
{
  int passagers ;
  double cout   ;

  scanf("%d %lf", &passagers, &cout);
  if(passagers)
  {
    cout += 1                   ;
    cout = cout/(passagers +1 ) ;
  }
  printf("%.2lf\n", cout)       ;
  return 0;
}
