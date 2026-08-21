/*
    15484 - Algoritmos e Porgramação
    Exercicio 6
    Nome : Vitor Leite
    RA : 26001613
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Digite A:");
    scanf("%d", &a);

    printf("Digite B:");
    scanf("%d", &b);

    printf("Digite C:");
    scanf("%d", &c);

    if (a >= 0 && a != 0){
    printf("\n x1 e: %f", (-b + sqrt((b*b) - 4 *a * c))/2 * a);
    printf("\n x2 e: %f", (-b - sqrt((b*b) - 4 *a * c))/2 * a);
    }

    return 0;

}