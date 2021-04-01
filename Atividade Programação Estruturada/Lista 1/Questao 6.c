//Sintese
//   Objetivo: Fazer uma matriz numérica de dimensões 10x5  e conte separadamente quantos elementos pares e ímpares existem na matriz. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin, maior=0;
	int notas[3][10]; // linha x coluna
	int somaI=0, somaP=0;
	
	for (lin=0; lin<2; lin++)
	{
		for (col=0; col<10; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (col=0; col<10; col++)
	{
		notas[2][col] = notas[0][col] + notas[1][col];
    }
	
	printf("\nA terceira linha da matriz e\n");
	
	for (lin=2; lin<3; lin++)
	{
		for (col=0; col<10; col++)
	    {
	    	printf("\n[%d,%d]: %i", lin+1, col+1, notas[lin][col]);
    	}
	}
	
	return 0;
}
