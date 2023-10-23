#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[10],ind;

    for(ind=0;ind<10;ind++){
        scanf("%d",&X[ind]);
        if(X[ind]<=0){
            X[ind]=1;
        }
    }


    for(ind=0;ind<10;ind++){
        printf("X[%d] = %d\n",ind,X[ind]);
    }

    return 0;
}
