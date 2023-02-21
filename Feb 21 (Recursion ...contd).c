#include<stdio.h>
int sum_digit(int a)
{
    if(a%10==a)
    {
        return a;
    }
    else
    {
        return(a%10 + sum_digit(a/10));
    }
}
main()
{
    int a;
    printf("Enter any digit = ");
    scanf("%d",&a);
    printf("Sum of digits %d",sum_digit(a));
}
