//ID_BEE      RA        NOME
//798447      114574    Gustavo Henrique Rodrigues
//811892      115826    Leonardo Vinícius Pais de Oliveira
//799251      114975    Gustavo Henrique Timachi
//801498      114971    Danilo Comin Honorato da Silva
//801474      115380    Márcio Roberto Soares Perereira Junior
//806478      113656    Alefe Thiago da Silva Cirino


#include <stdio.h>

int main(){
    int maior, numero;
    scanf("%d", &maior);

    while(scanf("%d", &numero) != EOF)
        if (numero>maior)
            maior=numero;

    printf("%d\n", maior);

    return 0;
}
