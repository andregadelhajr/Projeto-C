main()
{
	int i, valor;
	
	printf("insira valor: ");
	scanf("%i", &valor);
	
	if(valor<=2000){
		printf("\n\nValores pares:\n");
	for(i=valor;i<=2000;i++)
	{
		
		if(i%2==0)
		{
			printf("%i \n",i);
		}
	}
    }else
	{
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\t\t\tValor informado excedido.\n\n\n\n\n\n");
	}
}
