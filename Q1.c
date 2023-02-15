//input 3 values and find the greatest
#include<stdio.h>
int main()
{
    int n1;
    printf("Enter 1st num = ");
    scanf("%d",&n1);
    int n2;
    printf("Enter 2nd num = ");
    scanf("%d",&n2);
    int n3;
    printf("Enter 3rd num = ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
    {
        printf("Greatest num is = %d",n1);
    }
    else if(n1<n2 && n2>n3)
    {
        printf("Greatest num is = %d",n2);
    }
    else
    {
        printf("Greatest num is = %d",n3);
    }
}
