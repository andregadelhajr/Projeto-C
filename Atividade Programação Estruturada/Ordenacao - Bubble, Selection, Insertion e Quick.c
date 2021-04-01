// Sintese
//   objetivo "Ordenacao - Bubble, Selection, Insertion e Quick"
//   autor 
//   data "23/03/2021"

#include <stdio.h>
#include <time.h>
#define N 100

int comparacoes, copias;

void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertion(int[], int);
void quick(int[], int, int);

void mostrar(int[], int);
void copiar(int[], int[], int);

int main(void) {
	int vet[N], vetAux[N];
	int i;
	
	// Carregando o(s) vetor(es)
	srand(time(NULL));
	for (i=0; i<N; i++)
		vet[i] = rand()%100;
		
	copiar(vetAux, vet, N);
	printf("Metodo    Comparacoes Copias\n");
	
	comparacoes = copias = 0;
	bubbleSort(vet, N);
	printf("Bubble      %5d      %5d\n", comparacoes, copias);
	
	copiar(vet, vetAux, N);
	comparacoes = copias = 0;
	selectionSort(vet, N);
	printf("Selection   %5d      %5d\n", comparacoes, copias);
	
	copiar(vet, vetAux, N);
	comparacoes = copias = 0;
	insertion(vet, N);
	printf("Insertion   %5d      %5d\n", comparacoes, copias);
	
	copiar(vet, vetAux, N);
	comparacoes = copias = 0;
	quick(vet, 0, N-1);
	printf("Quick       %5d      %5d\n", comparacoes, copias);
		
	return 0;
}

void bubbleSort(int copo[], int tamanho) {
	int pos, borda, aux;
	
	for (borda=tamanho-1; borda>0; borda--) { // varias bolhas
		for (pos=0; pos<borda; pos++) { // 1 bolha subindo
			comparacoes++;
			if (copo[pos] > copo[pos+1]) {
				copias += 3;
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
			comparacoes++;
			if (copo[pos] > copo[posMaior]) {
				copias++;
				posMaior = pos;
			}
		}
		// Troca o "ultimo" com o maior
		copias++;
		aux = copo[borda];
		copo[borda] = copo[posMaior];
		copo[posMaior] = aux;
	}
}

void insertion(int v[], int tamanho) {
	int parte, pos, aux;	
	for (parte=1; parte<tamanho; parte++) {
		// inser??o de UM 
		pos = parte;
		while ((pos > 0) && (v[pos] < v[pos-1])) {
			comparacoes++;
			aux = v[pos];
			v[pos] = v[pos-1];
			v[pos-1] = aux;
			copias+=3;
			pos--;
		}
	}
}

void quick(int v[], int ini, int fim) {
	int i=ini, f=fim, pivo=v[(ini+fim)/2], aux;	
	while (i<=f) {
		while ((v[i] < pivo) && (i < fim)) {
			i++;
			comparacoes++;
		}			
		while ((v[f] > pivo) && (f > ini)) {
			f--;	
			comparacoes++;
		}		
		if (i<=f) {
			aux = v[i];
			v[i] = v[f];
			v[f] = aux;
			copias+=3;
			i++;
			f--;
		}
	}
	if (ini < f)
		quick(v, ini, f);
	if (i < fim)
		quick(v, i, fim);
}

void mostrar(int v[], int tamanho) {
	int i;
	for (i=0; i<tamanho; i++)
		printf("%d, ", v[i]);
	printf("\n");
}

void copiar(int destino[], int origem[], int tamanho) {
	int i;
	for (i=0; i<tamanho; i++)
		destino[i] = origem[i];
}
