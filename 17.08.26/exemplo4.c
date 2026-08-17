#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    printf("entre com dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // Tipo P é de pointer
    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a / b = %d\n", a / b);
    printf("a * b = %f\n", (float)a * b);
    printf("a %% b = %d\n", a % b );
   // Potenciação em C _
    printf("pow(a,b) = %d\n", pow(a,b));
    return 0;
}