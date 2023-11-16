#include <stdio.h>
#include <stdlib.h>

typedef struct _f{
	int Ai;
	int Di;
	int Li;
	int vg;
}player;

int main(){

	player p1, p2;

	int i=0,T=0,B=0;
	//Número de instãncias
	printf("Digite o número de Instâncias: \n");
	scanf("%d", &T);

	if(T!=0){
        //AS INSTÂNCIAS
        for(i;i<T;i++){
            //Valor de bonus fica fora da struct e vale para ambos os players
            printf("Digite o bônus: \n");
            scanf("%d",&B);

            //Player 1
            printf("Digite os atributos do JOGADOR Nº1 (atq, def, lvl) \n");
            scanf("%d %d %d", &p1.Ai,&p1.Di,&p1.Li);
            //Player 2
            printf("Digite os atributos do JOGADOR Nº2 (atq, def, lvl) \n");
            scanf("%d %d %d", &p2.Ai,&p2.Di,&p2.Li);

            //Cálculo do Valor do golpe de cada player junto com o bônus

             if(p1.Li%2==0)
            {
                p1.vg = ((p1.Ai+p1.Di)/2)+B;
                printf("Bônus aplicado ao Jogador 1!\n");
            }
            else if(p2.Li%2==0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2)+B;
                printf("Bônus aplicado ao Jogador 2!\n");
            }
             else if(p2.Li%2==0 && p1.Li%2==0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2)+B;
                p1.vg = ((p1.Ai+p1.Di)/2)+B;
                printf("Bônus aplicado à ambos os jogadores!\n");
            }
             else if(p2.Li%2!=0 && p1.Li%2!=0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2);
                p1.vg = ((p1.Ai+p1.Di)/2);
                printf("Nenhum bônus aplicado aos jogadores!\n");
            }
             else
            {
                printf("Nenhum bônus aplicado!\n");
            }

            //Verificação da vítória de algum player ou empate
            if(p1.vg==p2.vg)
            {
                printf("Empate\n");
            }
            else if(p1.vg>p2.vg)
            {
                printf("Dabriel 1\n");
            }
            else
            {
                printf("Guarte 2\n");
            }


        }
        printf("FIM DE JOGO!!\n");
	}else{
        printf("NÃO HÁ CONFRONTO!\n");
	}

	return 0;
}

