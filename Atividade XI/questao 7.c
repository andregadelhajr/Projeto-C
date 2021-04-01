int leValidaQtdeCDs();
int leValor();

void DezAumento(int *valor, int qtde);
void Aumento(int *valor, int qtde, float porc);

main(){
	
	int valor[100], i, qtde, opcao;
	float porc;
	
	qtde = leValidaQtdeCDs();
	
	for(i=0;i<qtde;i++)
	{
		valor[i] = leValor();
	}
	
	
	do{
		printf("\n\nDigite uma opcao de aumento");
		printf("\n1. 10 porcento de aumento");
		printf("\n2. escolher porcentagem");
		printf("\nOpcao: ");
		scanf("%i", &opcao);
		
		if(opcao==1)
		{
			printf("\n\nValores sem aumento: ");
            	
	        for(i=0;i<qtde;i++)
	        {
		        printf("\n%i ", valor[i]);
	        }
			
			DezAumento(valor, qtde);
	      	
			printf("\n\nValores com aumento: ");
			  	
			for(i=0;i<qtde;i++)
	        {
		        printf("\n%i ", valor[i]);
	        }
		}else
		{
			printf("\n\nDigite quanto deseja aumentar o valor dos CDs em porcetagem: ");
			scanf("%f", &porc);
			
			printf("\n\nValores sem aumento: ");
            	
	        for(i=0;i<qtde;i++)
	        {
		        printf("\n%i ", valor[i]);
	        }
			
			Aumento(valor, qtde, porc);
	      	
			printf("\n\nValores com aumento: ");
			  	
			for(i=0;i<qtde;i++)
	        {
		        printf("\n%i ", valor[i]);
	        }
		}
	}while(opcao < 1 || opcao > 2);
	
	
}

int leValidaQtdeCDs(){
	int qtde;
	
	do{
		
		printf("Digite a quantidade de CDs: ");
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
	
	printf("\nDigite um valor em reais do CD: ");
	scanf("%i", &valor);
	
	return valor;
}

void DezAumento(int *valor, int qtde)
{
	int i, aux=0;
	
	for(i=0;i<qtde;i++)
	{
		aux = valor[i] * 1.10;
		valor[i] = aux;
	}
	
}

void Aumento(int *valor, int qtde, float porc)
{
	int i, aux=0;
	
	for(i=0;i<qtde;i++)
	{
		aux = valor[i] * (1 + (porc / 100));
		valor[i] = aux;
	}
	
}
