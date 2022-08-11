#include<stdio.h>
#include<stdlib.h>

int square(int);
int main()
{
  int n;
  printf("Enter nay number:\n");
  scanf("%d",&n);

  square(n);
  printf("\nSquare of %d is %d",n,square(n));

  return 0;
  
}

int square(int x)
{
  int square;
  square = x*x;

  return square;
}



