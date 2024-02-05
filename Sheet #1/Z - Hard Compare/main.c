#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int int64_t;
int main()
{
    int64_t a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    // if (a^b > c^d) then (b*log(a) > d*log(c))
    b*log(a) > d*log(c)? printf("YES") : printf("NO");
    return 0;
}
