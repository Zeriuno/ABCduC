#include <stdio.h>

int main()
{
  int de1, de2 ;
  scanf("%d %d", &de1, &de2) ;

  if(de1+de2 > 9)
  {
    printf("Taxe spéciale !\n36\n");
  }
  else
  {
    printf("Taxe régulière\n%d\n", (de1+de2)*2);
  }
  return 0 ;
}
