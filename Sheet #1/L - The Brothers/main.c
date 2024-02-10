#include <stdio.h>

int main()
{
    char fname_1[300],lname_1[300],fname_2[300],lname_2[300];
    int cmp = 1;

    scanf("%s %s",fname_1,lname_1);
    scanf("%s %s",fname_2,lname_2);
    char *ptr1=lname_1,*ptr2=lname_2;

    while(*ptr1 != '\0' || *ptr2 != '\0'){
        if (*ptr1 != *ptr2) cmp =0;
        ptr1++;
        ptr2++;
    }

    cmp? printf("ARE Brothers"):printf("NOT");

    return 0;
}
