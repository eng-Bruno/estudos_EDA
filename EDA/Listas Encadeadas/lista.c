#include <stdio.h>
#include <stdlib.h>

struct ponto
{
	float x;
	float y;
	struct ponto *prox; // apontar para o proximo
};

typedef struct ponto Ponto;

Ponto *listaPontos; // vai apontar para o primeiro elemento da lista

void add(float x, float y)
{
		Ponto *p = (Ponto*) malloc(sizeof(Ponto));
	p->x = x;
	p->y = y;
	p->prox = listaPontos;
	
	listaPontos = p; // apontar para p
}

int main(void) {
	
	add(1,5);
	add(2,7);
	
  return 0;
}