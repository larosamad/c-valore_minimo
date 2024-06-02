// CHIEDI 5 numeri
// RESTITUISCI il valore minimo

#include <stdio.h>
#include <limits.h>
int numero, cont;
int minimo = INT_MAX;
const int NUMERI = 5;

int main (void){
    do {
        printf("Inserisci un numero\n");
        scanf("%d", &numero);
            if (numero<minimo)
                minimo=numero;
        cont++;
    } while (cont<NUMERI);
    printf("Il valore minimo è %d", minimo);
}