#include <stdio.h>

int main(){
    float mediapon,n1,n2,n3,n4;

    puts("Digite 4 valores:");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

    mediapon = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/(1+2+3+4);

    printf("A media ponderada sera: %.2f\n",mediapon);
}