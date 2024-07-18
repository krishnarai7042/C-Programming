#include<stdio.h>
int main()
{
    int n1,n2;
    char operation;
    printf("Eneter the first number \t");
    scanf("%d",&n1);
    printf("Eneter the second number \t");
    scanf("%d",&n2);
     printf("choose the operartion  ");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+' :
      // printf("\n ");d
        printf("The addition of both the number is %d\n ", n1+n2);
        break;
    case '-' :
    // printf("\n ");
        printf("The addition of both the number is %d\n ", n1-n2);
        break;
    case '/' :
     //printf("\n ");
        printf("The addition of both the number is %d\n ", n1/n2);
        break;
    case '%' :
     //printf("\n ");
        printf("The addition of both the number is %d\n ", n1%n2);
        break;
    case '*' :
     //printf("\n ");
        printf("The addition of both the number is %d\n ", n1*n2);
        break;
    

    default:
        break;
    }   
}







