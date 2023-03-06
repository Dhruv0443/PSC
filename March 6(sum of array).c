#include<stdio.h>
main()
{
    int arr[100];
    int n,i;
    int sum=0;
    printf("Enter no of ele in array = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of element in Array = %d",sum);
}
