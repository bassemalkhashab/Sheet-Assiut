#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d=0,m=0,y=0;
    scanf("%d",&d);
    m = (int) (d%365)/30;
    y = (int) d/365;
    d -= (y*365) + (m*30);
    printf("%d years\n%d months\n%d days",y,m,d);
    return 0;
}
