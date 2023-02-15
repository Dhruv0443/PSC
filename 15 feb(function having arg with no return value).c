#include<stdio.h>
void sum(int a, int b); //decleration
main()
{
    int x,y,z;
    printf("Enter 1st number = ");
    scanf("%d",&x);
    printf("Enter 2nd number = ");
    scanf("%d",&y);
    sum(x,y);
}
void sum(int a, int b) //defining
{
    int res;
    res=a+b;
    printf("sum = %d",res);
}
