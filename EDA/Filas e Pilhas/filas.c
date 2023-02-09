#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
	int senha;
	struct Pessoa *prox;
};

typedef struct pessoa Pessoa;

Pessoa *fila;

void add(int senha){ // adicionar ao final da fila
	
	Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
	p->senha = senha;
	p->prox = NULL;
	
	if(fila==NULL){
		fila = p;
	} else{
		Pessoa *filaAux = fila;
		while(filaAux->prox!=NULL){
			filaAux = filaAux->prox;
		};
		filaAux->prox = p;
	}
}

void remover(){
	if(fila==NULL){
		printf("Fila vazia");
	}else{
		fila = fila->prox;
	}
}

void imprime(Pessoa *f){
	if(f!=NULL){
		printf("\nSenha da Pessoa: %d", f->senha);
		imprime(f->prox);
	}
}

int main(void) {
  add(5);
	add(8);
	add(10);
	add(22);

	Pessoa *filaAux = fila;
	imprime(filaAux);

	printf("\n");
	
	remover();

	filaAux = fila;
	imprime(filaAux);

	printf("\n");
	
	remover();
	
	filaAux = fila;
	imprime(filaAux);
  return 0;
}