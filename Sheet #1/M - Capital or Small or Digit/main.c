#include <stdio.h>
#include <stdlib.h>

int main()
{
    char in;
    scanf("%c", &in);
    if(in >= 48 && in <= 57){
        printf("IS DIGIT");
    }
    else{
            printf("ALPHA\n");
        if(in >= 65 && in <=90){
            printf("IS CAPITAL");
        }
    else{
        printf("IS SMALL");
    }
    }
    return 0;
}
