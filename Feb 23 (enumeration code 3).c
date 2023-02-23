#include<stdio.h>
enum day{Sunday=1,Monday,Tuesday, Wednesday, Thursday,Friday, Saturday};
main()
{
    enum day d;
    d= Wednesday;
    switch(d)
    {
    case Sunday:
        printf("Today is sunday");
        break;
    case Monday:
        printf("Today is monday");
        break;
    case Tuesday:
        printf("Today is tuesday");
        break;
    case Wednesday:
        printf("Today is wednesday");
        break;
    case Thursday:
        printf("Today is thursday");
        break;
    case Friday:
        printf("Today is friday");
        break;
    case Saturday:
        printf("Today is saturday");
        break;
    }
}
