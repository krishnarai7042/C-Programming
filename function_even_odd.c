#include<stdio.h>

int check_even_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int i,j;
    printf("Enter the numeber \t");
    scanf("%d",&i);
    int k=check_even_odd(i);
    if(k==1)
    {
        printf("The entered %d number is a even number",i);

    }
    else if(k==0)
    {
        printf("The entered %d number is a odd number",i);
        
    }
    
    }