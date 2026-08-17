#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    printf("entre com dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // Type P stands to pointer
    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a / b = %d\n", a / b);
    printf("a * b = %f\n", (float)a * b);
    printf("a %% b = %d\n", a % b );
   // Power in C 
    printf("pow(a,b) = %lf\n", pow(a,b));
    // Sqrt Stands for Square Root.
    printf("sqrt(a) = %lf\n", sqrt(a));
    
    return 0;
}