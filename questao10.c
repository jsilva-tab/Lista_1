#include <stdio.h>
#include <math.h>

int main(){
    float r,p,a;

    puts("Insira o valor do raio:");
    scanf("%f",&r);

    p = 2*3.14*r;
    a = 3.14*(pow(r,2));

    printf("PERIMETRO DO CIRCULO: %.2f\tAREA DO CIRCULO: %.2f\n",p,a);
}