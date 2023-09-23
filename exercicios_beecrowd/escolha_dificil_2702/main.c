#include <stdio.h>
#include <stdlib.h>

int main()
{

    int frangoDisp, bifeDisp, massaDisp, frangoReq, bifeReq, massaReq, refeicoesFaltantes;

    scanf("%d %d %d", &frangoDisp, &bifeDisp, &massaDisp);//Disponíveis
    scanf("%d %d %d", &frangoReq, &bifeReq, &massaReq);//Requisitados

    //Verificações
    if(frangoDisp<frangoReq)
        refeicoesFaltantes = frangoReq - frangoDisp; //Atribuição


    if(bifeDisp<bifeReq)
        refeicoesFaltantes += bifeReq - bifeDisp; //Atribuição


    if(massaDisp<massaReq)
        refeicoesFaltantes += massaReq - massaDisp; //Atribuição


    //Resultado
    printf("%d\n", refeicoesFaltantes);


    return 0;
}
