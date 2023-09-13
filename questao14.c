#include <stdio.h>

int main(){
    int hr,min;

    puts("Insira o valor das horas:");
    scanf("%d",&hr);

    min = hr*60;

    printf("MINUTOS PASSADOS: %d\n",min);
}