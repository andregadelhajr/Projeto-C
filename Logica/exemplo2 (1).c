void ordenacao(int *vet);
main(){
	int vetor[10];
	int ind;
	
	for(ind=0;ind<10;ind++){
		vetor[ind] = rand()%10;
	}
	printf("Vetor desordenado: \n");
	for(ind=0;ind<10;ind++){
		printf("%i ", vetor[ind]);
	}
	printf("\n\nVetor ordenado: \n");
	ordenacao(vetor);
	for(ind=0;ind<10;ind++){
		printf("%i ", vetor[ind]);
	}
	
}

void ordenacao(int *vet){
	int aux, ind1, ind2;
	
	for(ind1=0;ind1<9;ind1++){
		for(ind2=ind1+1;ind2<10;ind2++){
			if(vet[ind1]>vet[ind2]){
				aux = vet[ind1];
				vet[ind1] = vet[ind2];
				vet[ind2] = aux;
			}
		}
	}
}
