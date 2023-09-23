#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdAlunos,raAlunos,i,raMaior=0;
    float ntAlunos,maiorNota=-1;

    scanf("%d",&qtdAlunos); //Quantidade de alunos

    for(i=0;i<qtdAlunos;i++){
        scanf("%d %f",&raAlunos,&ntAlunos); //RA e nota

        if(ntAlunos>maiorNota){ //Verificação de atribuição
        maiorNota=ntAlunos;
        raMaior=raAlunos;

        }
    }



    if(maiorNota>8.0){
        printf("Minimum note not reached\n");
    }else
        printf("%d\n",raMaior);

    return 0;
}
