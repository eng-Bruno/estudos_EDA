#include <stdio.h>

// == comparação de igualdade
// > comparação de maior
// < comparação de menor
// >= comparação de maior ou igual
// <= comparação de menor ou igual
// != comparação de diferença"

int main() {

	int a;
	printf("Digite um número: ");
	scanf("%d", &a);

	if(a==0) // ==, >, <, >=, <=, !=
	{
		printf("A variável 'a' é 0");
	}
	else
	{
		printf("A variável 'a' é diferente de 0");
	}

  return 0;
}
