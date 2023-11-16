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
	scanf("%d", &T);


        for(i;i<T;i++){
            scanf("%d",&B);

            scanf("%d %d %d", &p1.Ai,&p1.Di,&p1.Li);
            scanf("%d %d %d", &p2.Ai,&p2.Di,&p2.Li);

             if(p1.Li%2==0)
            {
                p1.vg = ((p1.Ai+p1.Di)/2)+B;
            }
            else if(p2.Li%2==0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2)+B;
            }
             else if(p2.Li%2==0 && p1.Li%2==0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2)+B;
                p1.vg = ((p1.Ai+p1.Di)/2)+B;
            }
             else if(p2.Li%2!=0 && p1.Li%2!=0)
            {
                p2.vg = ((p2.Ai+p2.Di)/2);
                p1.vg = ((p1.Ai+p1.Di)/2);
            }

            if(p1.vg==p2.vg)
            {
                printf("Empate\n");
            }
            else if(p1.vg>p2.vg)
            {
                printf("Dabriel\n");
            }
            else
            {
                printf("Guarte\n");
            }


        }


	return 0;
}
