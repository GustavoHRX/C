//O que falta resolver é o cálculo das horas no resul e também falta revisar a verificação do while
//Link: https://www.beecrowd.com.br/judge/pt/problems/view/1103

#include <stdio.h>

int horas(int h1,int m1,int h2,int m2){

    int resul;

    resul= ((h2*60)+m2)-((h1*60)+m1);


    return resul;
}



int main(){

	int h1,m1,h2,m2,res;

	do{

	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

	res=horas(h1,m1,h2,m2);

	printf("%d\n",res);


	} while(h1&&m1 || h2&&m2!=0);

	return 0;
}
