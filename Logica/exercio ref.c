void trocar(int *valor);

main(){
	
	int valor[4], i;
	
	for(i=0;i<4;i++)
	{
		printf("\nleia valor: ");
		scanf("%i", &valor[i]);
	}
	
	for(i=0;i<4;i++)
	{
		printf("\n%i ", valor[i]);
	}
	
	printf("\n\n");
	
	trocar(valor);
	
	for(i=0;i<4;i++)
	{
		printf("\n%i ", valor[i]);
	}
}

void trocar(int *valor)
{
	int aux=0, i;
	
	for(i=0;i<4;i++)
	{
		aux = valor[i] * 2;
		valor[i] = aux;
	}
	
}
