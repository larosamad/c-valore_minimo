// CHIEDI 5 numeri
// RESTITUISCI il valore minimo

#include <stdio.h>
#include <limits.h>
int numero, cont;
int minimo = INT_MAX;
const int DIMENSIONE_ARRAY = 5;
int numeri[DIMENSIONE_ARRAY];
int i;

int main(void){
        
        for(i=0; i<DIMENSIONE_ARRAY; i++){
        printf("Inserisci un numero\n");
        scanf("%d", &numeri[i]);
            if (numeri[i] < minimo){
                minimo = numeri[i];
            }
        }
    printf("Il valore minimo è %d", minimo);
}