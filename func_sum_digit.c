#include<stdio.h>
 
int sum_digit(int n)
{
   int i=0,j=0;
  
    while(n>0)
    {   
        j=n%10;    //258    j=8 j=5
        i=i+j;    // i=8  i=13
            //3+2+1
     //   printf("%d\n",i);
      //12,1
        n=n/10; 
    }
    return i;
    
}

int main()
{
    int z;
    printf("Enter the number: \t");
    scanf("%d",&z);
    int k= sum_digit(z);
    printf(" \t\t The sum of all the digit is = %d ",k);
    
}
