/*
    15484 - Algoritmos e Porgramação
    Exercicio 6
    Nome : Vitor Leite
    RA : 26001613
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main(){
    float r;
    printf("digite r: \n");
    scanf("%f", &r); 
    printf("Volume e %f", (4.0/3.0) * PI * pow(r, 3));     
}