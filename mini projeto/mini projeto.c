// Nome: Andre Gadelha Junior Matrícula: UC20104726 Data:27/11/2020

// Síntese
//  Objetivo: Elaborar um programa para auxiliar no controle e fiscalização de gastos.  
//  Entrada : O nome do evento que está sendo efetuado o controle, A quantidade de gastos realizados neste evento e
//            Cada um dos gastos em reais (R$) realizados no evento em análise.
//  Saída   : O nome do evento, sequência do gasto realizado e A média de todos os gastos.

#include<stdio.h>

void leValidaNomeEvento(char *evento);

int leValidaQtdedeGastos();
float leValidaGasto();
float calculaMedia(float soma, float qtdeGastos);

main(){
	
	char nomeEvento[25];
	int qtdeGastos, i;
	float gastosEvento[50], mediaGastos, soma=0;
	
	leValidaNomeEvento(nomeEvento);
	qtdeGastos = leValidaQtdedeGastos();
	
	for(i=0;i<qtdeGastos;i++)
	{
		printf("%i%c - Gasto:\n", i+1, 167);
		gastosEvento[i] = leValidaGasto();
		soma+=gastosEvento[i];
	}
	
	system("cls");
	printf("\n\n\t\t\t\t\t  O nome do evento: %s\n", nomeEvento);
	printf("\t\t\t\t     Sequencial:\t-       Gastos (R$):\n");
	
	for(i=0;i<qtdeGastos;i++)
	{
		printf("\t\t\t\t\t  %i             -\t  %.2f \t\t\n", i+1, gastosEvento[i]);
	}
	
	mediaGastos = calculaMedia(soma, qtdeGastos);
	
	printf("\n\t\t\t\t\tMedia dos Gastos = R$%.2f", mediaGastos);
}


void leValidaNomeEvento(char *evento)
{
	
	do{
		puts("Digite o nome da evento:");
		fflush(stdin);
		gets(evento);
		if(strcmp(evento,"")==0){
			puts("Nome do evento obrigatorio.");
		}
	}while(strcmp(evento,"")==0);
}

int leValidaQtdedeGastos()
{
	int qtde;
	
	do{
		printf("Digite a quantidade de gastos realizados neste evento:\n");
		scanf("%i", &qtde);
		
		if(qtde<3 || qtde>50){
			printf("Quantidade de gastos invalida.\n");
		}
	}while(qtde<3 || qtde>50);
	
	return qtde;
}

float leValidaGasto()
{
	float gasto;
	
	do{
		scanf("%f", &gasto);
		
		if(gasto<5000){
			printf("A quantidade de gasto invalido.\n");
		}
	}while(gasto<5000);
	
	return gasto;
}

float calculaMedia(float soma, float qtdeGastos)
{
	float valorMedia;
	
	valorMedia = soma / qtdeGastos;
	
	return valorMedia;
}

