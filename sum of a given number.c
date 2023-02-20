#include<stdio.h>
int main()
{
  int n,b,c=0;
  printf("Enter the number = ");
  scanf("%d",&n);
  while(0<n)
  {
    b=n%10;
    c=c+b;
    n=n/10;
  }
  printf("Sum of digits is = %d",c);
}
