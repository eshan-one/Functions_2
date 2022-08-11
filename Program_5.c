#include<stdio.h>
#include<stdlib.h>

int n_prime(int );
// Take Something return Nothing

int main()
{
  
  int Count;
  printf("\nEnter the value of N:\n");
  scanf("%d",&Count);

  
  

  
 n_prime(Count);
  return 0;

}

int n_prime(int count)
{
  int i;
  
  int f;
  int n=1;
  

  
  
  

  

  while(count)
    {
      
      for(i=2;i<=n;i++)
        {
          if(n%i==0)
          {
            break;
            
          }
        }
      if(i==n)
      {
        
        printf("\n%d",n);
        count--;
      }

      n++;

      
    }

  
 
  }
  
