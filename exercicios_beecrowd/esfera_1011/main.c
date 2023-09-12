#include <stdio.h>
#include <math.h>

int main() //Ver sobre math.h
{
    double vol,R,pi=3.14159;
    scanf("%lf",&R);

    vol = (4.0/3) * pi * (R * R * R);

    printf("VOLUME = %.3lf\n", vol);

    return 0;
}
