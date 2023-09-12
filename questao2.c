#include <stdio.h>

int main(void) {
  float n1,n2,n3,media;

  puts("Insira 3 números:");
  scanf("%f %f %f",&n1,&n2,&n3);

  media = (n1+n2+n3)/3;

  printf("A média aritmética é: %.2f",media);
  return 0;
}
