//Sintese
//   Objetivo: Fazer uma matriz numérica de dimensões 50x50  e calcule a somatória dos elementos da diagonal principal. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin, maior=0;
	int notas[50][50]; // linha x coluna
	int soma=0;
	
	for (lin=0; lin<50; lin++)
	{
		for (col=0; col<50; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (lin=0; lin<50; lin++)
	{
		for (col=0; col<50; col++)
	    {
		    if(lin == col)
			{
				soma += notas[lin][col];
			}
    	}
	}
	
	printf("\nA soma dos elementos da diagonal principal da matriz e: %i\n", soma);
	
	return 0;
}
