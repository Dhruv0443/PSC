#include<stdio.h>
enum weekday{Sunday=1,Monday,Tuesday, Wednesday, Thursday,Friday, Saturday};
main()
{
    enum weekday w;
    w=Tuesday;
    printf("The value of w is %d",w);

    return 0;
}
