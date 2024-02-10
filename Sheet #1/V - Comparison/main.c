#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b;
    char s;
    scanf("%lld %c %lld", &a, &s, &b);
    switch(s){
        case '<':
            a < b ? printf("Right") : printf("Wrong");
            break;
        case '>':
            a > b ? printf("Right") : printf("Wrong");
            break;
        case '=':
            a == b ? printf("Right") : printf("Wrong");
            break;
        default:
            printf("Wrong");

    }
    return 0;
}
