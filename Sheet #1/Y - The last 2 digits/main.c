#include <stdio.h>
#include <stdlib.h>
typedef long long int int64_t;

int main()
{
    int64_t a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    int res =((a%100)*(b%100)*(c%100)*(d%100))%100;
    (res%100)/10 == 0 ? printf("0%d",res) : printf("%d",res);
    return 0;
}
