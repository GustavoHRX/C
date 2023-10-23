#include <stdio.h>
#include <stdlib.h>

int main()
{

   int tg,vm;
   float calc,automovel=12;

   //entrada de dados
   scanf("%d",&tg); //tempo gasto
   scanf("%d",&vm); //velocidade media

   calc = (tg * vm) / automovel;

   printf("%.3f\n", calc);

    return 0;
}
