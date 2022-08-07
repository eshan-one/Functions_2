#include <stdio.h>
#include<stdlib.h>

int prime_or_not(int a);
int main()
{
  int n;
  printf("Enter any natural number:\n");
  scanf("%d", &n);

  prime_or_not(n);
  

  return 0;
}

int prime_or_not(int a)
{
  int i;
  int flag=0;
  int p,c;
  
  for(i=2;i<=a/2;i++)
    {

      if(a%i==0)
      {
      flag = 1;
      break;
      }
      
    }

  if(flag ==1)
  {
    printf("\nNot prime");
    return 1;
  }
  else
  {
    printf("\nPrime");
    return 0;
  }

  
}
