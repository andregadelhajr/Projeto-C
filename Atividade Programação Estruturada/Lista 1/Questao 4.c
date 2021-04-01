//Sintese
//   Objetivo: Fazer uma matriz numérica de dimensões 10x5  e conte separadamente quantos elementos pares e ímpares existem na matriz. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin, maior=0;
	int notas[10][5]; // linha x coluna
	int somaI=0, somaP=0;
	
	for (lin=0; lin<10; lin++)
	{
		for (col=0; col<5; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (lin=0; lin<10; lin++)
	{
		for (col=0; col<5; col++)
	    {
		     if(notas[lin][col] % 2 == 0)
			{
				somaP += 1;
			}
			else
			{
				somaI += 1;
			}
    	}
	}
	
	printf("\nA soma dos elementos impares e %i e do pares e %i\n", somaI, somaP);
	
	return 0;
}
