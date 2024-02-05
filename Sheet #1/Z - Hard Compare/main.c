#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int uint64_t;


uint64_t findGCD(uint64_t a, uint64_t b) {
    while (b != 0) {
        uint64_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


char *check_bigger(uint64_t a, long double b, uint64_t c, long double d) {

    if (b > d){
        return check_bigger(a*a,b/2,c,d);
    }
    else if (d > b){
         return check_bigger(a,b,c*c,d/2);
    }
    else{
        return a > c ? "YES" : "NO";
    }

}


int main()
{
  uint64_t a, b, c, d;
  if (scanf("%llu %llu %llu %llu", &a, &b, &c, &d) != 4 || b == 0 || d == 0) {
    printf("Invalid input\n");
    return 1;
  }
  uint64_t GCD_base = findGCD(a,c);
  uint64_t GCD_exp = findGCD(b,d);
  printf("%s\n", check_bigger(a/GCD_base, b/GCD_exp, c/GCD_base, d/GCD_exp));
  return 0;
}
