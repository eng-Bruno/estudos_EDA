#include <stdio.h>

int main()
{
	int num, soma;
	
	printf("\nDigite um número: ");
	scanf("%d", &num);

	soma = num + 5;

	printf("\nO valor da variável 'num' é: %d\n", num);
	printf("\nO valor da variável 'num' + 5 é: %d\n", soma);
	
	return 0;
}
