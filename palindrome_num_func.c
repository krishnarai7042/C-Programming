#include<stdio.h>
int main()
{
    int i=0,rem=0,n,k=0;
    //int l[3]={};
    printf("Enter a +ve number \t");
    scanf("%d",&n);
    int original=n;
    while(n>0)
    {
       
        k=n%10;             //  k= 171%10 k=1   k= 17%10  k=7   k=1
        
        rem=k + (rem*10);     //rem = 0+ 1= 1  rem = 1 + 7*10 = 71  rem =71+1*100 rem = 171
        n=n/10;             // n=17  // n=1  n=0
               // j=10  j=100
      
        /* code */
    }
    
   
    if(original==rem)
    {
         printf("The  number %d is palindrome  %d\t", original);
         
    }
    else
    {
         printf("The %d number is not a palindrome number:\t",n);
    }
}