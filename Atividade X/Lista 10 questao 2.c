void carro(char *nome, char *carro1, char *carro2, char *carro3);
void funcaoConcessionaria(char *nome);
main(){
	char cliente[25];
	printf("Digite o nome do cliente:\n");
	gets(cliente);
	funcaoConcessionaria(cliente);
}

void funcaoConcessionaria(char *nome){
	int op;
	do{
		printf("Escolha a concessionaria:\n");
		printf("1 - FIAT\n");
		printf("2 - CHEVROLET\n");
		printf("3 - FORD\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				carro(nome, "Argo", "Punto", "Palio");
				break;
			case 2:
				carro(nome, "Prisma", "S10", "Onix");
				break;
			case 3:
				carro(nome, "Ka", "Ranger", "Fusion");
				break;
			default:
				printf("Opcao invalida.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}

void carro(char *nome, char *carro1, char *carro2, char *carro3){
	int op;
	do{
		printf("Escolha o veiculo:\n");
		printf("1 - %s\n", carro1);
		printf("2 - %s\n", carro2);
		printf("3 - %s\n", carro3);
		scanf("%i", &op);
		switch(op){
			case 1:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", carro1, nome);
				break;
			case 2:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", carro2, nome);
				break;
			case 3:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", carro3, nome);
				break;
			default:
				printf("Carro nao encontrado.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}
