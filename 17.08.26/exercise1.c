#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    double h;

    printf("insira os valores dos catetos: ");
    scanf("%f %f", &a, &b);

    h = pow(a, 2) + pow(b, 2);
    
    printf("a hipotenusa é igual a: %lf", sqrt(h));
    
    return 0;
}