#include<stdio.h>
enum month{Jan=1,Feb,March, Apr, May,June, July,Aug, Sep, Oct, Nov, Dec};
main()
{
    int i;
    for(i=Jan;i<=Dec;i++)
    {
        printf("%d \n",i);
    }



    return 0;
}
