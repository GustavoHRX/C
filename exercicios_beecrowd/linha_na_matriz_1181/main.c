#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat[12][12],soma=0,aux;
    int i,j,L; //"i" para o primeiro looping, "j" para o segundo
    char T;

    scanf("%f",&aux);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            mat[i][j] = aux;
        }
    }

    //definição da Linha e Soma
    scanf("%d",&L);
    scanf(" %c",&T);

    //aqui é fixado a L especifica que o usuario escolheu e eh verificado coluna por coluna
    for(j=0;j<12;j++){
        soma += mat[L][j];
    }

    if(T == 'S'){
        printf("%.1f",soma);
    }else{
        printf("%.1f",soma/12);
    }

    return 0;
}
