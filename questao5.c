#include <stdio.h>

int main(void) {
  float num;

  puts("Insira um número:");
  scanf("%f",&num);

  printf("A terça parte desse número é: %.2f\n",num/3);
  return 0;
}
