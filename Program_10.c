#include<stdio.h>
#include<stdlib.h>

void sum();
int main()
{
  sum();
  return 0;
}


void sum ()

{
  int n,f=1;
  int s = 1;

  int s1=1;
  
  n = 4;
  

  while(n>0)
    {
      f = f*n;
      n--;
    }
  

  n = 4;

  while(f>=2)
    {
      s = s + f;
      f = f/n;
      n--;
    }

  printf("\nThe sum of the series : \n%d", s+s1);


}
