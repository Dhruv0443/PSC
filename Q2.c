#include<stdio.h>
int main()
{
    int n1;
    printf("\nEnter Maths marks = ");
    scanf("%d",&n1);
    int n2;
    printf("\nEnter Science marks = ");
    scanf("%d",&n2);
    int n3;
    printf("\nEnter GK marks = ");
    scanf("%d",&n3);
    int n4;
    printf("\nEnter Prog marks = ");
    scanf("%d",&n4);
    int n5;
    printf("\nEnter English marks = ");
    scanf("%d",&n5);
    int sum =(n1+n2+n3+n4+n5);
    int avg = (sum/5);
    if(n1>=0 && n1<=100)
    {
       if(n1>50)
       {
           printf("\nPass in Maths");
       }
       else{printf("\nFail in Maths ");}
    }
    if(n2>=0 && n2<=100)
    {
       if(n2>50)
       {
           printf("\nPass in Science");
       }
       else{printf("\nFail in Science ");}
    }
    if(n3>=0 && n3<=100)
    {
       if(n3>50)
       {
           printf("\nPass in GK");
       }
       else{printf("\nFail in GK ");}
    }
    if(n4>=0 && n4<=100)
    {
       if(n4>50)
       {
           printf("\nPass in Prog ");
       }
       else{printf("\nFail in Prog ");}
    }
    if(n5>=0 && n5<=100)
    {
       if(n5>50)
       {
           printf("\nPass in Engish");
       }
       else{printf("\nFail in English");}
    }

    printf("\nPercetange = %d",avg);

    if(avg>=91 && avg<=100)
    {
        printf("\nYour Grade - O ");
    }
    else if(avg>=81 && avg<=90)
    {
        printf("\nYour Grade - A* ");
    }
    else if(avg>=71 && avg<=80)
    {
        printf("\nYour Grade - A ");
    }
    else if(avg>=61 && avg<=70)
    {
        printf("\nYour Grade - B");
    }
   else if(avg>=91 && avg<=100)
    {
        printf("\nYour Grade - C ");
    }
    else{
        printf("\n\nYou are fail");
    }


}
