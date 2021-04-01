//Sintese
//   Objetivo: vetor de 13 elementos inteiros, que é o Gabarito de um teste da loteria esportiva. 
//   Data: 22/02/2021
//   Programador: André gadelha da silva junior

#include <stdio.h>

int main (void){
	
	int col, lin;
	int notas[1][12]; // linha x coluna
	int soma=0;
	
	notas[0][0] = 3;
	notas[0][1] = 1;
	notas[0][2] = 2;
	notas[0][3] = 6;
	notas[0][4] = 8;
	notas[0][5] = 10;
	notas[0][6] = 20;
	notas[0][7] = 0;
	notas[0][8] = 13;
	notas[0][9] = 12;
	notas[0][10] = 9;
	notas[0][11] = 18;
	notas[0][12] = 11;
	
	for (lin=1; lin<2; lin++)
	{
		for (col=0; col<13; col++)
	    {
		    printf("Digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (lin=1; lin<2; lin++)
	{
		for (col=0; col<13; col++)
	    {
		    if(notas[lin-1][col] == notas[lin][col])
			{
				soma += 1;
			}
    	}
	}
	
	if(soma >= 13)
	{
		printf("\nA soma dos acertos e %i, com esse resultado voce e o vencedor\n", soma);
	}else
	{
		printf("\nA soma dos acertos e %i, infelizmente voce perde\n", soma);
	}
	
	return 0;
}
