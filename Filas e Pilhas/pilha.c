#include <stdio.h>
#include <stdlib.h>

struct prato
{
	int cor;
	struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha;

void add(char cor){
	Prato *p = (Prato*) malloc(sizeof(Prato));
	p->cor = cor;
	p->prox = pilha;
	pilha = p;
}

void remover(){
	if(pilha==NULL){
		printf("PILHA VAZIA");
	}else {
		pilha = pilha->prox;
	}
}

void imprime(Prato *p){
	if(p!=NULL){
		printf("\nCor do Prato: %c", p->cor);
		imprime(p->prox);
	}
}

int main(void) {
  add('b');
	add('r');
	add('g');
	add('y');

	remover();
	remover();

	Prato *pilhaAux = pilha;
	imprime(pilhaAux);
  return 0;
}