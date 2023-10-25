#include <stdio.h>

double calculoVM(int dist,int tempo){
	double velocM;

	velocM = (double) dist / tempo;
	return velocM;
}

int main(){
	int treinos, distancia, duracao, i;
	double recorde, media;

	while(scanf("%d",&treinos) != EOF){
		recorde =-1;

		for(i=1; i<=treinos; i++){
			scanf("%d %d", &duracao, &distancia);
			media=calculoVM(distancia,duracao);

			if(media > recorde){
				printf("%d\n", i);
				recorde = media;
			}
		}

	}


	return 0;
}
