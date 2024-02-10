#include <stdio.h>

int main()
{
    long int a,b;

    scanf("%ld %ld",&a,&b);

    a%b==0 || b%a==0?printf("Multiples"):printf("No Multiples");

    return 0;
}
