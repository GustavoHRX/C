//O que falta resolver é o cálculo das horas no resul e também falta revisar a verificação do while
//Link: https://www.beecrowd.com.br/judge/pt/problems/view/1103

#include <stdio.h>

int horas(int h1,int m1,int h2,int m2){

    int resul,calc1,calc2;

    calc1=(h1*60)+m1;
    calc2=(h2*60)+m2;

    if(h1 > h2 || (h1 == h2 && m1>m2)){
        calc2+=24*60;
    }

    return calc2-calc1;
}



int main(){

	int h1,m1,h2,m2,res;

	do{

	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

	if(h1==0&&h2==0&&m1==0&&m2==0){
        break;
	}

	res=horas(h1,m1,h2,m2);

	printf("%d\n",res);


	} while(1);

	return 0;
}
