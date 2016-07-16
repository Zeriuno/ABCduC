#include <stdio.h>

int main()
{
  int age, valise ;
  scanf("%d %d", &age, &valise) ;
  if(age == 60)
  {
    printf("0\n") ;
  }
  else
  {
    if(age < 10)
    {
      printf("5\n") ;
    }
    else
    {
      if(valise < 20)
        printf("30\n") ;
      else
        printf("40\n") ;
    }
  }
  return 0 ;
}
