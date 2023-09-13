#include <stdio.h>

int main(){
    float prest,valor,taxa,tempo;

    puts("Insira o valor:");
    scanf("%f",&valor);
    puts("Insira a taxa:");
    scanf("%f",&taxa);
    puts("Insira o tempo de atraso:");
    scanf("%f",&tempo);

    prest = valor + (valor*(taxa/100)*tempo);

    printf("Valor da prestacao em atraso: %.2f\n",prest);
}