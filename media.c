/******************************************************************************

              Carica un vettore di interi e calcola la media

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[50];
    int N;
    
    printf("Inserisci il numero di elementi (tra 1 e 50): ");
    scanf("%d", &N);
    
    if(N<1 || N>50){
        printf("Inserisci un numero tra 1 e 50");
        return 1;
    }
    
    int i;
    for(i=0;i<N;i++){
        printf("Inserisci elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    
    int sommaParziale = 0;
    //Calcolo la media
    for(i=0;i<N;i++){
        sommaParziale += vet[i];
    }
    /* 
    * (float) davanti alla variabile serve a
    * convertire i numeri di
    * tipo int in tipo float, altrimenti si
    * perde il numero dopo la virgola
    */  
    float media = (float)sommaParziale/(float)N;
    
    /* 
    * Per stampare un numero con la virgola si
    * usa %f, in questo caso %.2f significa 
    * "stampa un numero con la virgola mantenendo
    * solo 2 cifre decimali" 
    */
    printf("Media: %.2f\n", media);

    return 0;
}
