#include <stdio.h>

int *p;
int val = 5;

int main() {
	//ponteiro apontando para o endereço de val
  p = &val;

	printf("O valor apontado por 'p' é: %d", *p);
	
  return 0;
}
