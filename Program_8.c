#include<stdio.h>
#include<stdlib.h>

int factorial(int);
int combination(int n, int r);
int pascal(int);
int factorial(int x)
{
  int i;
  int fact=1;

  for(i=1;i<=x;i++)
    {
      fact = fact*i;
      
    }
  return fact;
}


int combination(int n, int r)
{
  int combo;
  return factorial(n)/((factorial(r)*(factorial(n-r))));

}

int pascal(a)
{
  int i,j;
  for(i=0;i<=a;i++)
    {
      for(j=0;j<=i;j++)
        {
          printf("%d ",combination(i,j));
        }
      printf("\n");
    }
}

int main()
{
  int N;
  printf("Enter any number:\n");
  scanf("%d", &N);

  pascal(N);
  return 0;
}
