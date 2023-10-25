#include <stdio.h>
#include <math.h>

float coordenadas (float x1, float y1, float x2, float y2){

	float res;
	res = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	return res;

}

int main(){

	float x1,y1,x2,y2,res,i;

	for(i=0;i<3;i++){

	scanf("%f %f %f %f", &x1,&y1,&x2,&y2);
	res = coordenadas(x1,y1,x2,y2);

	}


	printf("%f", res);

	return 0;
}
