#include <stdio.h>
#include<stdlib.h>

int HCF(int x, int y);
int main()
{
  int a,b;
  printf("Enter two natural numbers:\n");
  scanf("%d%d", &a,&b);

  HCF(a,b);
  printf("\nThe HCF of %d & %d is %d",a,b,HCF(a,b));

  return 0;
  
}






int HCF(int x, int y)
{
  int multiple=1;
  int hcf;

  for(multiple=1; multiple<=x*y;multiple++ )
    {
      if(multiple%x==0 && multiple%y==0)
      {
        
        break;
      }
    }

  hcf = (x*y)/multiple;
  // Above equation is a property of HCF and LCM

  return hcf;
  
}

  
