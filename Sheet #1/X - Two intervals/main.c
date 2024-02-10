#include <stdio.h>
#include <stdlib.h>
typedef long long int int64_t;

int main()
{
    int64_t l1,r1,l2,r2, lc,rc;
    scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);

    if(r2 <= r1 && r2 >= l1){
        rc = r2;
    }
    else if(r1 <= r2 &&  r1 >= l2){
        rc = r1;
    }
    else{
        rc = -1;
    }
    if(l2 >=l1 && l2 <= r1){
        lc = l2;
    }
    else if (l1 >= l2 && l1 <= r2){
        lc = l1;
    }
    else{
        lc = -1;
    }
    if(rc == -1){
        printf("%lld", rc);
    }
    else{
        printf("%lld %lld", lc, rc);
    }
    return 0;
}
