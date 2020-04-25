/*Participantes: 

Alexandre Paschoal Hausmann - 256601
Isabela Archanjo Batarce - 236862

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "baralho.h"

Carta * newCarta(int valor, int naipe) {
	Carta *aux;
	aux = (Carta *)malloc(sizeof(Carta));
	aux->valor=valor;
	aux->naipe=naipe;
	// printf ("Adicionou\n");
	return aux;

}

Baralho * newBaralho(){
	//aqui Ã© int *baralho, ou Baralho *baralho
	//alocando espaÃ§o na memÃ³ria para o baralho
	Baralho *baralho;
	int i;
	baralho =(Baralho*) malloc(sizeof(Baralho));
	baralho->topo = 0;
	// printf("Baralho\n");

	return baralho;
}

//void addCarta(int *b, int *c){/
void addCarta(Baralho *b, Carta *c){
	int aux;
	aux = b->topo;
	b->c[aux]=c;
	// b->topo = aux++;
	b->topo = b->topo +1;

	// printf("%d %d\n",b->topo,aux);

}

Carta * removeCarta(Baralho *b){
	free(b->c);
	free(b);

}

void imprimeBaralho(Baralho * b){
	int i=0,auxNaipe=0,auxValor=0;
	for(i=0;i<b->topo;i++){
		auxNaipe=b->c[i]->naipe;
		auxValor=b->c[i]->valor;
		switch(auxNaipe){
			case 0:
				printf("%d OURO\n",auxValor);
			break;
			case 1:
				printf("%d ESPADA\n",auxValor);
			break;
			case 2:
				printf("%d COPA\n",auxValor);
			break;
			case 3:
				printf("%d PAUS\n",auxValor);
			break;
		}

	}
}

void imprimeCarta(Carta *c){
	int auxNaipe,auxValor;
	auxNaipe=c->naipe;
	auxValor=c->valor;
	switch(auxNaipe){
		case 0:
			printf("%d OURO\n",auxValor);
		break;
		case 1:
			printf("%d ESPADA\n",auxValor);
		break;
		case 2:
			printf("%d COPA\n",auxValor);
		break;
		case 3:
			printf("%d PAUS\n",auxValor);
		break;
	}
}
void ordena(Baralho *b){
	int i=0,k=0,aux=0,tamanho,auxNaipe=0,auxValor=0,ordenaValor=0,ordenaNaipe=0;
	tamanho = b->topo;

	for(i=0;i<tamanho;i++){
		for(k=i;k<tamanho;k++){
			ordenaNaipe = b->c[i]->naipe;
			ordenaValor = b->c[i]->valor;
			if(ordenaValor != b->c[k]->valor){
				if((b->c[i]->valor)>(b->c[k]->valor)){
					auxValor = b->c[i]->valor;
					b->c[i]->valor = b->c[k]->valor;
					b->c[k]->valor =auxValor;
					auxNaipe = b->c[i]->naipe;
					b->c[i]->naipe = b->c[k]->naipe;
					b->c[k]->naipe =auxNaipe;
				}
			}else{
				if((b->c[i]->naipe)>(b->c[k]->naipe)){
					auxNaipe = b->c[i]->naipe;
					b->c[i]->naipe = b->c[k]->naipe;
					b->c[k]->naipe =auxNaipe;
				}
		}
	}

}
//printf("Ordena\n");
}

void embaralha(Baralho *b){
	int i=0,aleatorio=0,tamanho=0, auxValor=0,auxNaipe=0;
	tamanho= b->topo;
	//printf("Embaralha\n");
	srand(time(NULL));
	for(i=0;i<tamanho;i++){

		aleatorio = rand()%7;
		auxValor = b->c[i]->valor;
		auxNaipe = b->c[i]->naipe;
		b->c[i]->valor = b->c[aleatorio]->valor;
		b->c[i]->naipe = b->c[aleatorio]->naipe;
		b->c[aleatorio]->valor = auxValor;
		b->c[aleatorio]->naipe = auxNaipe;
		// printf("Aleatorio %d\n", aleatorio);
	}


}

