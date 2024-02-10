#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
    char s,q;
    long int c;
    scanf("%d %c %d %c %ld", &a,&s,&b,&q,&c);
    switch(s){
    case '+':
        if(a+b == c) printf("Yes");
        else printf("%ld", a+b);
        break;
    case '-':
        if(a-b == c) printf("Yes");
        else printf("%ld", a-b);
        break;
    case '*':
        if(a*b == c) printf("Yes");
        else printf("%ld", a*b);
        break;
    }
    return 0;
}
