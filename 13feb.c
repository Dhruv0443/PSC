#include<string.h>
int main ()
{

    char str[20];
    printf("Enter a string = ");
    gets(str);
    puts(str);

    char str1[20];
    printf("Enter a 2nd string = ");
    gets(str1);
    puts(str1);
    puts(strupr(str));
    puts(strlwr(str));
    puts(strrev(str));
    int n=strlen(str);
    printf("%d \n",n);

    puts(strcat(str,str1));
    int r= strcmp(str,str1);
    printf("%d \n",r);
}


