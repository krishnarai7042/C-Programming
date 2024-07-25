#include<stdio.h>
#include<math.h>
int flag;
int isprime(int n)
{

    if(n<0||n==1)
    {
        flag=1;
    }
    for(int i=2; i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
           
            flag=1;
            return flag;
        }
        else{

        
            flag=0;
            return flag;
        }

    }
    
}

int main()
{
    int i;
    printf("Enter the number :\t");
    scanf("%d",&i);
    isprime(i);
      if(flag==1)
      {
             printf("Entered number is not a prime number: \t");

      }
      
      else
      {
              printf("Entered number is a prime number: \t");

      }
}