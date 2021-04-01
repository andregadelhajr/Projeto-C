int leValidaQtdeValores();
int leValor();
int leBuscar();


main(){
	
	int valor[80], i, i2=0,ind=0, qtde, buscar;
	
	qtde = leValidaQtdeValores();
	
	for(i=0;i<qtde;i++)
	{
		valor[i] = leValor();
	}
	
	buscar = leBuscar();
	
	while(i2 == 0 &&  ind < qtde)
    {
   	
        if(valor[ind]== buscar)
	    {
            i2 = 1;
        }
        ind++;
    }

    if(i2 == 1)
	{
		system("cls");
        printf("\n\n\n\n\t\t\t\t\tO Numero %i pertence aos valores lidos\n\n\n",buscar);
    }else
    {
    	system("cls");
        printf("\n\n\n\n\t\t\t\t\tO Numero %i nao pertence aos valores lidos\n\n\n",buscar);
    }
}

int leValidaQtdeValores(){
	int qtde;
	
	do{
		
		printf("Digite a quantidade de valores: ");
		scanf("%i", &qtde);
		
		if(qtde<0 || qtde>80)
		{
			printf("\nQuantidade invalida.\n");
		}
	}while(qtde<0 || qtde>80);
	
	return qtde;
}

int leValor()
{
	int valor;
	
	printf("\nDigite um valor: ");
	scanf("%i", &valor);
	
	return valor;
}

int leBuscar()
{
	int buscar;
	
	printf("\nDigite um valor para busca-lo: ");
	scanf("%i", &buscar);
	
	return buscar;
}
