#include <stdio.h>

int main() {
    int i, x, swi, coelhos=0, ratos=0, sapos=0, total=0;
    char swichar;
    // Input e processing data
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        scanf("%d %c", &swi, &swichar);

        if (swichar == 'C') {
            coelhos += swi;
        } else if (swichar == 'R') {
            ratos += swi;
        } else if (swichar == 'S') {
            sapos += swi;
        }
    }
    total = coelhos + ratos + sapos;
    // Output data

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %\n", (double) coelhos / total * 100);
    printf("Percentual de ratos: %.2lf %\n", (double) ratos / total * 100);
    printf("Percentual de sapos: %.2lf %\n", (double) sapos / total * 100);

    return 0;
}
