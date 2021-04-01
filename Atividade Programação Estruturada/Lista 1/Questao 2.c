//Sintese
//   Objetivo: Fazer uma matriz numérica de dimensões 50x20 e informe a posição do maior elemento. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin, maior=0;
	int notas[50][20]; // linha x coluna
	float resultado=0;
	
	for (lin=0; lin<50; lin++)
	{
		for (col=0; col<20; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (lin=0; lin<50; lin++)
	{
		for (col=0; col<20; col++)
	    {
		    if(maior == 0)
			{
				maior = notas[lin][col];
			}
			else if(notas[lin][col] > maior)
			{
				maior = notas[lin][col];
			}
    	}
	}
	
	printf("\nO maior numero da matriz e: %i\n", maior);
	
	return 0;
}
