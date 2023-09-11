#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100]; //char == string
    double sf,tv, TOTAL;

    scanf("%s",&nome);
    scanf("%lf",&sf);
    scanf("%lf",&tv);
    TOTAL = (tv * 0.15) + sf;

    printf("TOTAL = R% %.2lf\n", TOTAL);


    return 0;
}
