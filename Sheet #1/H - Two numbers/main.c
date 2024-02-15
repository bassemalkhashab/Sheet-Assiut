#include <stdio.h>

int main()
{
    int a,b,res;
    scanf("%d %d", &a,&b);
    res = a/b;

    printf("floor %d / %d = %d\n",a,b, res);
    a%b == 0 ? printf("ceil %d / %d = %d\n",a,b, res):printf("ceil %d / %d = %d\n",a,b, res+1);
    printf("round %d / %d = %d",a,b, (float) a/ (float)b >= ((float)(a/b)+0.5) ? res+1: res);

    return 0;
}
