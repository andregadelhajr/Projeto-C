int leValidaQtdeValores();
int leValor();


main(){
	
	int valor[100], i, soma=0, qtde;
	
	qtde = leValidaQtdeValores();
	
	for(i=0;i<qtde;i++)
	{
		valor[i] = leValor();
		soma = soma + valor[i];
	}
	
	system("cls");
	printf("Soma dos valores e igual: %i\n", soma);
}

int leValidaQtdeValores(){
	int qtde;
	
	do{
		
		printf("Digite a quantidade de valores: ");
		scanf("%i", &qtde);
		
		if(qtde<0 || qtde>100)
		{
			printf("\nQuantidade invalida.\n");
		}
	}while(qtde<0 || qtde>100);
	
	return qtde;
}

int leValor()
{
	int valor;
	
	printf("\nDigite um valor: ");
	scanf("%i", &valor);
	
	return valor;
}
