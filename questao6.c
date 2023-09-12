#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double n1,n2;
  
  puts("Insira dois valores:");
  scanf("%lf %lf",&n1,&n2);

  printf("Dividendo: %.2lf\n",n1);
  printf("Divisor: %.2lf\n",n2);
  printf("Resto: %.2lf\n",fmod(n1,n2));
  printf("Quociente: %.2lf\n",n1/n2);
  
  return 0;
}
