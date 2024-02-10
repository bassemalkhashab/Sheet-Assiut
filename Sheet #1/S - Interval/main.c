#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input;
    scanf("%f",&input);
    if(input >= 0 && input <= 25){
        printf("Interval [0,25]");
    }
    else if(input > 25 && input <= 50){
        printf("Interval (25,50]");
    }
    else if(input > 50 && input <= 75){
        printf("Interval (50,75]");
    }
    else if(input > 75 && input <= 100){
        printf("Interval (75,100]");
    }
    else{
        printf("Out of Intervals");
    }

    return 0;
}
