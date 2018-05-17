/******************************************************************************

            Carica un vettore di caratteri e stampa le consonanti

*******************************************************************************/

#include <stdio.h>

int main()
{
    char vet[50];
    char vocali[5] = "aeiou";
    int N;
    
    printf("Inserisci il numero di elementi (tra 1 e 50): ");
    scanf("%d", &N);
    
    if(N<1 || N>50){
        printf("Inserisci un numero tra 1 e 50");
        return 1;
    }
    
    int i, j;
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
    
    //confronto ogni lettera con tutte e 5 le vocali
    for(i=0;i<N;i++){ //Uso i come contantore di vet[]
    
        /*
         * isVocal vale 1 se C( una vocale,
         * 0 se C( una consonante. Di default
         * C( impostata a 0, se nel ciclo mi
         * accorgo che C( una vocale lo metto
         * a 1 cosC, so che non dovrC2 stamparla
        */
        int isVocal = 0;
    
        for(j=0;j<5;j++){ //Uso j come contantore di vocali[]
        
            if(vet[i]==vocali[j]){
                isVocal=1;
            }
        }
        if(isVocal==0){
            //C( una consonante, la stampo!
            printf("%c", vet[i]);
        }
        
    }
    //Finito di stampare le consonanti mando a capo
    printf("\n");

    return 0;
}
