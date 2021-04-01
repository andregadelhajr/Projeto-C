#include<stdio.h>

void leValidaCidade(char *cidade);
int leValidaQtdeEstabelecimentos();
int leValidaFocos();
int leValidaQtdePessoas();

main(){
	
	char nomeCidade[25];
	int qtdeEstabelecimento, indice, contMaior=0;
	int qtdeFocos[100], qtdePessoas[100];
	float valorMedio, soma=0;
	leValidaCidade(nomeCidade);
	qtdeEstabelecimento = leValidaQtdeEstabelecimentos();
	for(indice=0;indice<qtdeEstabelecimento;indice++){
		printf("%i%c - Estabelecimento:\n", indice+1, 167);
		qtdeFocos[indice] = leValidaFocos();
		qtdePessoas[indice] = leValidaQtdePessoas();
		soma+=qtdePessoas[indice];
	}
	system("cls");
	printf("Cidade investigada: %s\n\n", nomeCidade);
	printf("Quantidade total de estabelecimentos: %i e total de pessoas: %.0f\n\n", qtdeEstabelecimento, soma);
	printf("Quantidade Pessoas: \t- Quantidade de focos:\n");
	for(indice=0;indice<qtdeEstabelecimento;indice++){
		printf("%i%c -\t%i \t\t- \t%i\n", indice+1, 167, qtdePessoas[indice], qtdeFocos[indice]);
	}
	valorMedio = soma/qtdeEstabelecimento;
	for(indice=0;indice<qtdeEstabelecimento;indice++){
		if(qtdePessoas[indice]>valorMedio){
			contMaior++;
		}
	}
	printf("\nO valor medio da quantidade de pessoas e de %.2f\n", valorMedio);
	printf("A quantidade de estabelecimentos que tem a quantidade MAIOR de pessoas vivendo que o valor medio: %i\n", contMaior);
}

void leValidaCidade(char *cidade){
	do{
		puts("Digite o nome da cidade:");
		fflush(stdin);
		gets(cidade);
		if(strcmp(cidade,"")==0){
			puts("Nome da cidade obrigatorio.");
		}
	}while(strcmp(cidade,"")==0);
}

int leValidaQtdeEstabelecimentos(){
	int qtde;
	do{
		printf("Digite a quantidade de estabelecimentos:\n");
		scanf("%i", &qtde);
		if(qtde<5 || qtde>100){
			printf("Quantidade invalida.\n");
		}
	}while(qtde<5 || qtde>100);
	return qtde;
}

int leValidaFocos(){
	int focos;
	do{
		printf("Digite a quantidade de focos:\n");
		scanf("%i", &focos);
		if(focos<0){
			printf("A quantidade de focos nao pode ser negativa.\n");
		}
	}while(focos<0);
	return focos;
}

int leValidaQtdePessoas(){
	int qtdePessoas;
	do{
		printf("Digite a quantidade de pessoas:\n");
		scanf("%i", &qtdePessoas);
		if(qtdePessoas<=0){
			printf("Quantidade de pessoas invalida.\n");
		}
	}while(qtdePessoas<=0);
	return qtdePessoas;
}
