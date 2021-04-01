// Sintese
//   objetivo "Pesquisa - sequencial e binaria"
//   autor 
//   data "09/03/2021"

#include <stdio.h>
#define N 1000

int qtd;

int pesquisaSequencial(int[], int, int);
int pesquisaBinaria(int[], int, int);
int pesquisaBinariaRecursiva(int[], int, int, int);

int main(void) {
	int vet[N];	// ordenado
	int x, pos;
	
	// Carregando o vetor
	for (x=0; x<N; x++)
		vet[x] = x*2;
	
	printf("Digite o valor a pesquisar: ");
	scanf("%d", &x);
	
	qtd=0;
	pos = pesquisaSequencial(vet, N, x);
	if (pos != -1)
		printf("Pesquisa sequencial ---------- Achei na posicao %i = %i", pos, x);
	else
		printf("Pesquisa sequencial ---------- Nao achei");
	printf(" - Acessos = %i\n", qtd);
		
	qtd=0;
	pos = pesquisaBinaria(vet, N, x);
	if (pos != -1)
		printf("Pesquisa binaria - iterativa - Achei na posicao %i = %i", pos, x);
	else
		printf("Pesquisa binaria - iterativa - Nao achei");
	printf(" - Acessos = %i\n", qtd);
		
	qtd=0;
	pos = pesquisaBinariaRecursiva(vet, 0, N-1, x);
	if (pos != -1)
		printf("Pesquisa binaria - recursiva - Achei na posicao %i = %i", pos, x);
	else
		printf("Pesquisa binaria - recursiva - Nao achei");
	printf(" - Acessos = %i\n", qtd);
		
	return 0;
}

int pesquisaSequencial(int v[], int n, int chave) {
	int i=0;
	while ((i<n) && (v[i] < chave)) {
		i++;
		qtd++;
	}
	if ((i==n) || (v[i] != chave))
		return -1;
	return i;
}

int pesquisaBinaria(int v[], int n, int chave) {
	int ini=0, fim=n-1, meio;
	while (ini <= fim) {
		qtd++;
		meio = (ini + fim) / 2;
		if (v[meio] == chave)
			return meio;
		if (chave < v[meio])
			fim = meio-1;
		else
			ini = meio+1;
	}
	return -1;
}

int pesquisaBinariaRecursiva(int v[], int ini, int fim, int chave) {
	int meio = (ini + fim) / 2;
	if (chave == v[meio]) // condicao de parada = achou
		return meio;
	if (ini > fim) // condicao de parada = NAO achou
		return -1;
	qtd++;
	if (chave < v[meio])
		return pesquisaBinariaRecursiva(v, ini, meio-1, chave);
	return pesquisaBinariaRecursiva(v, meio+1, fim, chave);
}
