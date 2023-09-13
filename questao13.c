#include <stdio.h>

int main(){
    float num,den,dec;

    puts("Insira o valor do numerador:");
    scanf("%f",&num);
    puts("Insira o valor do denominador:");
    scanf("%f",&den);

    dec = num/den;

    printf("DECIMAL: %.2f\n",dec);
}