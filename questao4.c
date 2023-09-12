#include <stdio.h>

int main(void) {
  int num1,num2,soma;

  puts("Insira dois números:");
  scanf("%d %d",&num1,&num2);

  soma = num1 + num2;

  puts("\nSOMA:");
  printf("%d\n",soma);
  return 0;
}
