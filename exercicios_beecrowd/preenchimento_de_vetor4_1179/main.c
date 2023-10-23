#include <stdio.h>

int main(void)
{
    int i=0, j=0, k=0, m=0, num;
    int par[5], impar[5];

    k = 0;
    m = 0;
    for (i=0; i<15; i++)
    {
        scanf("%d", &num);

        if (num%2 == 0) {
            par[k] = num;
            k++;
            if (k==5) {
                k = 0;
                for (j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
            }
        }
        else {
            impar[m] = num;
            m++;
            if (m==5) {
                m = 0;
                for (j=0; j<5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
            }
        }
    }

    for (i=0; i<m; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (i=0; i<k; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
