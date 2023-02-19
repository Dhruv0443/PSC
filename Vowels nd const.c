#include<stdio.h>
int main()
{
    char al;
    printf("Enter an alphabet = ");
    scanf("%c", &al);
    /*if(al=='a' || al=='A' || al=='E' || al=='e' || al=='i' || al=='I' || al=='o' ||al=='O' || al=='u' || al=='U')
    {
        printf("Its a vowel");
    }
    else{
        printf("Its a consonant");
    }*/
    switch(al)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Its a vowel");
        break;
    default:
        printf("Its a consonant");
        break;
    }
}
