//Sintese
//   Objetivo:
//   Data:
//   Programador:

#include <stdio.h>
#define TAM 10

int main (void){
	
	int col, lin;
	int notas[3][2]; // linha x coluna
	float resultado=0;
	
	for (lin=0; lin<3; lin++)
	{
		for (col=0; col<2; col++)
	    {
		    printf("digite o numero [%d,%d]: ", lin+1, col+1);
		    scanf("%i", &notas[lin][col]);
    	}
	}
	
	for (lin=0; lin<3; lin++)
	{
		for (col=0; col<2; col++)
	    {
		    resultado += notas[lin][col];
    	}
	}
	
	resultado /= 6;
	
	printf("Resultado e: %f", resultado);
	
	return 0;
}
