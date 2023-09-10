#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    int i,receptor;

    for(i=1;i<=6;i++){

        scanf("%f",&num);

        if(num >= 0){
            receptor += 1;
        }
    }

    printf("%i valores positivos\n", receptor);

    return 0;
}
