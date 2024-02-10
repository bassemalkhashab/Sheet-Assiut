#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double in;

    scanf("%lf",&in);
     long long int in_int = (long long int) in;
    in - (double)in_int == 0.000000000000000000 ? printf("int %lld",in_int): printf("float %lld %.3lf", in_int, in - (double)in_int);
    //printf("%lld", in_int);
    return 0;
}
