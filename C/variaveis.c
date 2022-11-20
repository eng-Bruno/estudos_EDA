#include <stdio.h>

int a = 5;
float num = 2.3;
double d = 2.3;
char c = 't';

int main(void) 
{
  printf("O valor da variável 'a' é: %d\n", a);
	printf("O valor da variável 'num' é: %.1f\n", num);
	printf("O valor da variável 'd' é: %lf\n", d);
	printf("O valor da variável 'c' é: %c\n", c);
	
  return 0;
}
