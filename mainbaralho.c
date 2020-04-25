//main.c
#include <stdio.h>
#include <stdlib.h>
#include "baralho.h"
int main(int argc, char** argv) {
    
    Baralho * b = newBaralho();
    
    addCarta(b,newCarta(11,OURO));
    addCarta(b,newCarta(12,PAUS));    
    addCarta(b,newCarta(11,COPA));            
    addCarta(b,newCarta(1,OURO));
    addCarta(b,newCarta(2,PAUS));    
    addCarta(b,newCarta(3,OURO));
    addCarta(b,newCarta(1,PAUS));
    
    printf("Baralho inicial \n");
    imprimeBaralho(b);
    printf("Baralho ordenado \n");
    ordena(b);
    imprimeBaralho(b);
    printf("Baralho embaralhado \n");
    embaralha(b);
    imprimeBaralho(b);
    
    return (EXIT_SUCCESS);
}

