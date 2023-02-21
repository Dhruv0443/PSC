#include<stdio.h>
#include<math.h>
int reverse(int a)
{
    if(a%10==a)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",a%10);
        reverse(a/10);
    }
}
main()
{
    int a;
    printf("Enter any digit = ");
    scanf("%d",&a);
    printf("reverse of digits = ");
    reverse(a);
}
