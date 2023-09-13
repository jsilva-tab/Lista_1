#include <stdio.h>

int main(){
    float b,h,peri,area;

    puts("Insira o valor da base:");
    scanf("%f",&b);
    puts("Insira o valor da altura:");
    scanf("%f",&h);

    peri = 2*(h+b);
    area = b*h;

    printf("PERIMETRO DO RETANGULO: %.2f\tAREA DO RETANGULO: %.2f\n",peri,area);
}