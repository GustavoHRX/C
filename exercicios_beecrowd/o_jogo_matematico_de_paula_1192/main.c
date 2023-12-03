#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int N,i;
    int num1,num2;
    char N1,L,N2;

    printf("Digite a sequencia de numero(os): \n");
    scanf("%d", &N);

    if(N!=0){
        for(i=0;i<N;i++){
            printf("Digite o valor do primeiro numero: \n");
            scanf(" %c", &N1);
            printf("Digite o valor do segundo numero: \n");
            scanf(" %c", &N2);
            printf("Digite a letra: \n");
            scanf(" %c", &L);

            if(N1==N2||N2==N1)
            {
                num1 = N1-'0';
                num2 = N2-'0';
                printf("%d\n", num1*num2);
            }
            else if(isupper(L)) //Parte da "ctype.h", verifica se o char é maiúsculo
            {
                num1 = N1-'0';
                num2 = N2-'0';
                printf("%d\n", num2-num1);

            }
            else if(islower(L)) //Parte da "ctype.h", verifica se o char é minúsculo
            {
                num1 = N1-'0';
                num2 = N2-'0';
                printf("%d\n", num2+num1);

            }

          /*printf("A ordem digitada é: %c%c%c\n", N1,L,N2);
            printf("\n");
            printf("Proxima sequencia\n");
            printf("\n");
          */

        }
    }else{
        printf("SEM ENTRADA!\n");
    }

    return 0;
}

