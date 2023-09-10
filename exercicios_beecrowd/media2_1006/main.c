#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C,res;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    res = ((2*A) + (3*B) + (5*C)) / 10;

    printf("MEDIA = %.1lf\n", res);

    return 0;
}
