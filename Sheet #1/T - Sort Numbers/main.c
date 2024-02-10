#include <stdio.h>

int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    long long int arr[3]={a,b,c};
    for (int i=0; i<3;i++){
        for (int j=i; j<3; j++){
            if(arr[i] > arr[j]) arr[i] ^= arr[j] ^= arr[i] ^= arr[j];
        }
    }
    printf("%lld\n%lld\n%lld\n\n", arr[0],arr[1],arr[2]);
    printf("%lld\n%lld\n%lld", a,b,c);

    return 0;
}
