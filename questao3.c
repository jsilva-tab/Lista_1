#include <stdio.h>

int main(void) {
  int numero;

  puts("Digite um número:");
  scanf("%d",&numero);

  printf("Sucessor: %d\n",numero+1);
  printf("Antecessor: %d\n",numero-1);
  return 0;
}
