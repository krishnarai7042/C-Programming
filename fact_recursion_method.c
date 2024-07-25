#include<stdio.h>

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else{
        return(n*fact(n-1));  //5*4*3*2*1
    }
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fact(n);
    printf("the factorial of %d is = %d\t",n,fact(n));
}