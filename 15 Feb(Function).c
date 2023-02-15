#include<stdio.h>
int sum(int a, int b); //decleration
main()
{
    int x,y,z;
    printf("Enter 1st number = ");
    scanf("%d",&x);
    printf("Enter 2nd number = ");
    scanf("%d",&y);

    z=sum(x,y);
    printf("Sum = %d",z);
}
int sum(int a, int b) //defining
{
    int res;
    res=a+b;
    return res;
}
