#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resA,resM,resD,entrada,ano,mes,dia;

    printf("Digite sua idade em dias! \n");
    scanf("%d",&entrada);

    //cálculo do ano
    resA= entrada/ano;
    printf("%d ano(s)\n", resA);

    //cálculo do mẽs
    resA= entrada/mes;
    printf("%d mes(es)\n", resA);

    //Para efetuar o cálculo do mês é necessário pegar o resultado do cálculo do ano, multiplica-lo por 12 e então, dividi-lo por 12.

    return 0;
}
