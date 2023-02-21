#include<stdio.h>
void show(int n)
{
    if(n==1)
    {
        printf("\n true");
    }
    else
    {
        printf("\n false");
        show(n-1);
    }
}
main()
{
    int a;
    printf("Enter any value = ");
    scanf("%d",&a);
    show(a);
}
