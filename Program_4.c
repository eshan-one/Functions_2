#include<stdio.h>
#include<stdlib.h>

int next_prime(int );

int main()
{
  int num;
  printf("\nEnter any number:\n");
  scanf("%d",&num);

  next_prime(num);

  printf("\nThe next prime number is\n%d",next_prime(num));

  return 0;

}

int next_prime(int n)
{
  int i;
  int flag = 0;
  int f;
  

  
  n = n+1;
  

  

  while(n)
    {
      flag = 0;
      for(i=2;i<=n/2;i++)
        {
          if(n%i==0)
          {
            flag = 1;
            
          }
        }
      if(flag==0)
      {
        f=n;
        
        break;
        
      }

      n++;
    }

  return f;
 
  }
  
