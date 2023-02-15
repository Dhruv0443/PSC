#include<stdio.h>
void sum(); //decleration
main()
{
    sum();//calling
}
void sum() //defining
{
    int x,y,z;
    printf("Enter 1st number = ");
    scanf("%d",&x);
    printf("Enter 2nd number = ");
    scanf("%d",&y);
    z=x+y;
    printf("Sum = %d",z);
}
