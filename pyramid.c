#include<stdio.h>
int main()
{
    int i,j,k=1,l,m,n;

    printf("Enter the number of rows:\t  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)           //i=0;
    {                 
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        
            for(k=1;k<=i;k++)
            {
                for(l=1;l<=k;l++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    }


/*
1
2 3
4 5 6
7 8 9 10
*/