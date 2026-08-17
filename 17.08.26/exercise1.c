#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    double h, hipotenusa;

    printf("insira os valores dos catetos: ");
    scanf("%f %f", &a, &b);

    h = pow(a, 2) + pow(b, 2);
    hipotenusa = sqrt(h);
    printf("a hipotenusa é igual a: %lf", hipotenusa);

}