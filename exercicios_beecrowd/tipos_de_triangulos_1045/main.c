#include <stdio.h>

int main() {
    float A,B, C,temp;
    //input data
    scanf("%f %f %f", &A, &B, &C);
    // processing and output data
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A < C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B < C) {
        temp = B;
        B = C;
        C = temp;
    }
    if (A >= B+C){
        printf("NAO FORMA TRIANGULO\n");
    }
   else {
        if ((A*A)==(B*B)+(C*C)){
            printf("TRIANGULO RETANGULO\n");
        }
        if ((A*A) > (B*B)+(C*C)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((A*A) < (B*B)+(C*C)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((A==B) || (B==C) || (C==A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
   }
    return 0;
}
