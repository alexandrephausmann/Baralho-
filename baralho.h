//baralho.h
#ifndef BARALHO_H
#define BARALHO_H
#define OURO    0
#define ESPADA  1
#define COPA    2
#define PAUS    3
typedef struct Carta{
    //valor entre 1 e 13
    int valor;
    // valor entre 0 e 3
    int naipe;
}Carta;
typedef struct Baralho{
    Carta *c[100];
    int topo;
}Baralho;

//cria uma carta
Carta * newCarta(int valor, int naipe);

//cria um baralho com zero cartas
Baralho * newBaralho();

//adiciona uma carta no baralho
void addCarta(Baralho *b, Carta *c);

//remove um carta do topo do baralho
Carta * removeCarta(Baralho *b);

//embaralha. Faz uma permutação aleatória no baralho
void embaralha(Baralho *b);

//Ordena o baralho da menor carta para a maior.
void ordena(Baralho *b);

//imprime uma carta
void imprimeCarta(Carta *c);

//imprime o baralho
void imprimeBaralho(Baralho * b);
#endif /* BARALHO_H */