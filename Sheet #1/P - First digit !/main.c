#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f;
    scanf("%d",&n);
    f = (int) n/1000;
    f%2 == 0? printf("EVEN"): printf("ODD");
    return 0;
}
