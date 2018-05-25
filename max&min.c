/******************************************************************************
              Carica un vettore di interi e calcola la media,
                     la somma, massimo e minimo
*******************************************************************************/

#include <stdio.h>

int main()
{
	int vet[20];
	int N;

	printf("Inserisci il numero di elementi (tra 1 e 20): ");
	scanf("%d", &N);

	if(N<1 || N>20){
		printf("Inserisci un numero tra 1 e 50");
		return 1;
	}

	int i;
	for(i=0;i<N;i++){
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &vet[i]);
	}

	int sommaParziale = 0;
	
	//come massimo inziale prendo il primo elemento del vettore, che poi confronterò con tutti gli altri
	int max = vet[0];
	int min = vet[0];
	for(i=0;i<N;i++){
		if(vet[i]>max){
			max = vet[i];
		}else if(vet[i]<min){ //metto un else perché se ho trovato un massimo non può essere anche un minimo!
			min = vet[i];
		}
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
	printf("Somma: %d\n", sommaParziale);
	printf("Massimo: %d\n", max);
	printf("Minimo: %d\n", min);

	return 0;
}
