#include <stdio.h>

int main(){
    float saldo,novosal;

    puts("Insira o novo saldo da aplicacao:");
    scanf("%f",&saldo);

    novosal = saldo + (saldo*0.01);

    printf("Novo saldo com o reajuste: %.2f\n",novosal);
}