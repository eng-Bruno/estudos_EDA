#include <stdio.h>

struct pessoa{
	int idade;
	float altura;
};

// redefine tipos de dados
// renomeando struct pessoa para Pessoa
typedef struct pessoa Pessoa;

int main() {

	// variável do tipo struct pessoa
	//struct pessoa p;
	Pessoa p;

	p.idade = 13;
	p.altura = 1.65;

	printf("A altura da pessoa p é: %.2f\n", p.altura);
	printf("A altura da pessoa p é: %d", p.idade);
	
  return 0;
}
