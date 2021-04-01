//Sintese
//   Objetivo: Fazer uma matriz numérica de dimensões 20x20 e a imprima na tela como uma matriz, com linhas e colunas. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin;
	int notas[20][20]; // linha x coluna
	float resultado=0;
	
	for (lin=0; lin<20; lin++)
	{
		for (col=0; col<20; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	printf("\nA matriz 20x20 formada da: \n");
	
	for (lin=0; lin<20; lin++)
	{
		printf("\n");
		for (col=0; col<20; col++)
	    {
		    printf("[%i]", notas[lin][col]);
    	}
	}
	
	return 0;
}
