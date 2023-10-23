#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aux,mat[5][10],menorVal= 1000; //definição da matriz
    int i,j,menorL=0,menorC=0;

    //entrada de dados
    for(i=0;i<5;i++){ //Linha
        for(j=0;j<10;j++){ //Coluna
            scanf("%f", &mat[i][j]);
            if(mat[i][j]<menorVal){ //condicional: se algum valor for menor que a variavel, progride
                menorVal = mat[i][j]; //menor valor é atualizado
                menorL=i; //linha do menor valor é fixada
                menorC=j; //coluna do menor valor é fixada
            }

        }
    }

    printf("O menor valor encontrado é %.2f, da Linha: %d e da coluna: %d", menorVal,menorL,menorC);


    return 0;
}
