#include<stdio.h>
int power(int base, int exp)
{
    if(exp==1)
    {
        return base;
    }
    else{
        return base*power(base,exp-1);
    }
}
main()
{
    int base,exp;
    printf("Enter base = ");
    scanf("%d",&base);
    printf("Enter exponential power = ");
    scanf("%d",&exp);
    printf("Result  = %d",power(base,exp));

}
