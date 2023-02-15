#include<stdio.h>
int sum(); //decleration
main()
{
    int res;
    res=sum();//calling
    printf("Sum = %d",res);
}
int sum() //defining
{
    int x,y,z;
    printf("Enter 1st number = ");
    scanf("%d",&x);
    printf("Enter 2nd number = ");
    scanf("%d",&y);
    z=x+y;
    return z;
}
