/******************************************************************************

             Carica un vettore di caratteri e stampa le vocali

*******************************************************************************/

#include <stdio.h>

int main()
{
    char vet[50];
    int N;
    
    printf("Inserisci il numero di elementi (tra 1 e 50): ");
    scanf("%d", &N);
    
    if(N<1 || N>50){
        printf("Inserisci un numero tra 1 e 50");
        return 1;
    }
    
    int i;
    for(i=0;i<N;i++){
        printf("Inserisci carattere %d: ", i+1);
        /*
         * invece di fare una getchar() a vuoto per togliere
         * il \n dal buffer, possiamo direttamente raccoglierlo
         * (e scartarlo) nello scanf mettendo uno spazio
        */ 
        //getchar();
        scanf(" %c", &vet[i]);
        
    }
    
    for(i=0;i<N;i++){
        if(vet[i]=='a' || vet[i]=='e' || vet[i]=='i' || vet[i]=='o' || vet[i]=='u'){
            printf("%c", vet[i]);
        }
    }
    //Finito di stampare le vocali mando a capo
    printf("\n");

    return 0;
}
