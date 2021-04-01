// Sintese
//   objetivo "Ordenacao - Bubble e Selection"
//   autor 
//   data "16/03/2021"

#include <stdio.h>
#include <time.h>
#define N 10

void bubbleSort(int[], int);
void selectionSort(int[], int);
void mostrar(int[], int);

int main(void) {
	int vet1[N], vet2[N];
	int i, x;
	
	// Carregando o(s) vetor(es)
	srand(time(NULL));
	for (i=0; i<N; i++) {
		x = rand()%100;
		vet1[i] = x;
		vet2[i] = x;
	}	
		
	printf("Antes:\n");
	mostrar(vet1, N);
	mostrar(vet2, N);
		
	bubbleSort(vet1, N);
	selectionSort(vet2, N);
		
	printf("\nDepois:\n");
	mostrar(vet1, N);
	mostrar(vet2, N);
		
	return 0;
}

void bubbleSort(int copo[], int tamanho) {
	int pos, borda, aux;
	
	for (borda=tamanho-1; borda>0; borda--) { // varias bolhas
		for (pos=0; pos<borda; pos++) { // 1 bolha subindo
			if (copo[pos] > copo[pos+1]) {
				aux = copo[pos+1];
				copo[pos+1] = copo[pos];
				copo[pos] = aux;
			}	
		}
	}
}

void selectionSort(int copo[], int tamanho) {
	int pos, borda, aux, posMaior;
	
	for (borda=tamanho-1; borda>0; borda--) {
		posMaior = 0;
		for (pos=1; pos<=borda; pos++) { // Selciona a posicao do maior
			if (copo[pos] > copo[posMaior])
				posMaior = pos;		
		}
		// Troca o "ultimo" com o maior
		aux = copo[borda];
		copo[borda] = copo[posMaior];
		copo[posMaior] = aux;
	}
}

void mostrar(int v[], int tamanho) {
	int i;
	for (i=0; i<tamanho; i++)
		printf("%d, ", v[i]);
	printf("\n");
}
