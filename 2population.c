#include <stdio.h>

int main()
{
  int pop, popfut                              ;
  double croissance                            ;

  scanf("%d %lf", &pop, &croissance)           ;
  popfut = (int) pop / 100.0 * croissance + pop  ;
  printf("%d\n", popfut)                       ;
  return 0;
}
