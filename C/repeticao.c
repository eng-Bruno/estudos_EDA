#include <stdio.h>

int main() {

	int a=0;

	printf("\n====Laço WHILE====\n");

	while(a<5)
	{
		printf("Variável 'a' é: %d\n", a);
		a++; // a = a + 1
	}

	printf("\n====Laço FOR====\n");

	// for ( inicialização ; teste ; incremento )
	for(int i=0; i<4; i++)
	{
		printf("A variável 'i' é: %d\n", i);
	}
	
  return 0;
}