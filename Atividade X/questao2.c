void fiat();
void chevrolet();
void ford();
void funcaoConcessionaria();
main(){
	funcaoConcessionaria();
}

void funcaoConcessionaria(){
	int op;
	do{
		printf("Escolha a concessionaria:\n");
		printf("1 - FIAT\n");
		printf("2 - CHEVROLET\n");
		printf("3 - FORD\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				fiat();
				break;
			case 2:
				chevrolet();
				break;
			case 3:
				ford();
				break;
			default:
				printf("Opcao invalida.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}

void fiat(){
	int op;
	do{
		printf("Escolha o veiculo:\n");
		printf("1 - Argo\n");
		printf("2 - Punto\n");
		printf("3 - Palio\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Argo", "Wesley");
				break;
			case 2:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Punto", "Wesley");
				break;
			case 3:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Palio", "Wesley");
				break;
			default:
				printf("Carro nao encontrado.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}

void chevrolet(){
	int op;
	do{
		printf("Escolha o veiculo:\n");
		printf("1 - Prisma\n");
		printf("2 - S10\n");
		printf("3 - Onix\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Prisma", "Wesley");
				break;
			case 2:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "S10", "Wesley");
				break;
			case 3:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Onix", "Wesley");
				break;
			default:
				printf("Carro nao encontrado.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}

void ford(){
	int op;
	do{
		printf("Escolha o veiculo:\n");
		printf("1 - Ka\n");
		printf("2 - Ranger\n");
		printf("3 - Fusion\n");
		scanf("%i", &op);
		switch(op){
			case 1:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Ka", "Wesley");
				break;
			case 2:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Ranger", "Wesley");
				break;
			case 3:
				system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAgradecemos por escolher o veiculo %s sr. %s\n\n\n\n\n\n\n\n\n\n\n", "Fusion", "Wesley");
				break;
			default:
				printf("Carro nao encontrado.\n");
		}
		system("pause");
		system("cls");
	}while(op<1 || op>3);
}
