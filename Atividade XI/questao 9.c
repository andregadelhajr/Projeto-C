int leValidaQtdePessoas();
int leIdade();


main(){
	
	int Idade[100], i, soma=0, qtde, idadeMaior, posicao;
	float mediaIdades;
	
	qtde = leValidaQtdePessoas();
	
	for(i=0;i<qtde;i++)
	{
		Idade[i] = leIdade();
		soma = soma + Idade[i];
		
		if(i==0)
		{
			idadeMaior = Idade[i];
		}else{
			if(Idade[i] > idadeMaior)
			{
				idadeMaior = Idade[i];
			}
		}
			
	}
	
	for(i=0;i<qtde;i++)
	{
		if(Idade[i] == idadeMaior)
		{
			posicao = i;
		}	
	}
	
	mediaIdades = soma / qtde;
	
	system("cls");
	printf("\nA media das idades e igual: %2.f", mediaIdades);
	printf("\nA maior idade e %i, e sua posicao no vetor e %i\n", idadeMaior, posicao);	
}

int leValidaQtdePessoas(){
	int qtde;
	
	do{
		
		printf("Digite a quantidade de Pessoas: ");
		scanf("%i", &qtde);
		
		if(qtde<0 || qtde>100)
		{
			printf("\nQuantidade invalida.\n");
		}
	}while(qtde<0 || qtde>100);
	
	return qtde;
}

int leIdade()
{
	int Idade;
	
	printf("\nDigite a idade da pessoa: ");
	scanf("%i", &Idade);
	
	return Idade;
}
