#include<stdio.h>
#include<stdlib.h>

int n_prime(int, int );
// Take Something return Nothing

int main()
{
  
  int A,B;
  printf("\nEnter the value of a and b:\n");
  scanf("%d%d",&A,&B);

  n_prime(A,B);
  return 0;

}

int n_prime(int a, int b)
{
  int i;
  
  int flag = 0;
  int n;
  
  
  for(n=a;n<=b;n++)
    {
      flag = 0;
      for(i=2;i<=n/2;i++)
        {
          
          if(n%i==0)
          {
            flag =1;
            break;
            
          }
        }
      if(flag==0)
      {
        
        printf("\n%d ",n);
        
      }

    

      
    }

  
 
  }
  
