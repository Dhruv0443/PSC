#include<stdio.h>
int fact(int a)
{
    if(a==1)
    {
        return a;
    }
    else
    {
        return(a * fact(a-1));
    }
}
main()
{
    int a;
    printf("Enter any digit = ");
    scanf("%d",&a);
    printf("Factorial of number = %d",fact(a));
}
