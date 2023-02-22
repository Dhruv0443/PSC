#include<stdio.h>
int div =2;
int prime(int n)
{
    if(div<n && n%div==0)
    {
        return 0;//for not prime
    }
    else if(div==2)
    {
        return 1;//for prime
    }
    else{
        div++;
        prime(n);//recursive
    }
}
main()
{
    int n,ans;
    printf("Enter number = ");
    scanf("%d",&n);
    ans= prime(n);
    if(ans==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Non Prime");
    }
}
