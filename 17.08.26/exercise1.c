#include <stdio.h>
#include <math.h>

int main(){
    float a, b;

    printf("insira os valores dos catetos: ");
    scanf("%f %f", &a, &b);
    
    printf("a hipotenusa é igual a: %lf", sqrt(pow(a, 2) + pow(b, 2)));
    
    return 0;
}