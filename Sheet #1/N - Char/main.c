#include <stdio.h>
#include <stdlib.h>

int main()
{
    char diff, c;
    diff = 'A' - 'a';
    scanf("%c",&c);

    if(c >= 'a' && c <= 'z'){
        printf("%c", c+diff);
    }
    if(c >= 'A' && c <= 'Z'){
        printf("%c", c-diff);
    }
    return 0;
}
