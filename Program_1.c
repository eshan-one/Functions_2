#include <stdio.h>
#include<stdlib.h>

int LCM(int x, int y);
int main()
{
  int a,b;
  printf("Enter two natural numbers:\n");
  scanf("%d%d", &a,&b);

  LCM(a,b);
  printf("\nThe LCM of %d & %d is %d",a,b,LCM(a,b));

  return 0;
  
}


int LCM(int x, int y)
{
  int multiple=1;

  for(multiple=1; multiple<=x*y;multiple++ )
    {
      if(multiple%x==0 && multiple%y==0)
      {
        
        break;
      }
    }
  return multiple;
}
