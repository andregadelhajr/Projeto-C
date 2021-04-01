// Sintese
//   objetivo "Lista 3, varios de recursividade"
//   autor 
//   data "06/03/2021"

#include <stdio.h>

int exponencial(int, int);
int localizar(int, int);
int tetranacci(int);
int menor(int[], int);

int main(void) {
	int v[5]={10,20,3,4,5};

	printf("\nExercicio 2 - exponencial = %d", exponencial(2, 3));
	printf("\nExercicio 3 - localizar digito = %d", localizar(223, 2));
	printf("\nExercicio 5 - tetranacci = %d", tetranacci(10));
	printf("\nExtra - menor = %d", menor(v, 5));
	
	return 0;
}

int exponencial(int base, int exp) {
	if (exp == 0)
		return 1;
	return exponencial(base, exp-1) * base;
}

int localizar(int num, int digito) {
	int resp;
	if (num == 0) // condicao de parada
		return 0;		
	resp = localizar(num/10, digito);
	if (num % 10 == digito)
		resp++;
	return resp;
}

int tetranacci(int termo) {
	if (termo == 1) // condicao de parada
		return 0;		
	if (termo == 2) // condicao de parada
		return 0;		
	if (termo == 3) // condicao de parada
		return 0;		
	if (termo == 4) // condicao de parada
		return 1;	
	return tetranacci(termo-1) + tetranacci(termo-2) + tetranacci(termo-3) + tetranacci(termo-4);
}

int menor(int vet[], int n) {
	int m;
	if (n == 1)
		return vet[0];
	m = menor(vet, n-1);
	if (vet[n-1] < m)
		return vet[n-1];
	return m;	
}

