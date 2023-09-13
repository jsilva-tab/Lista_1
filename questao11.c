#include <stdio.h>

int main(){
    float b,h,area;

    puts("Insira o valor da base:");
    scanf("%f",&b);
    puts("Insira o valor da altura:");
    scanf("%f",&h);

    area = (b*h)/2;

    printf("AREA DO TRIANGULO: %.2f",area);
}