main(){
	
	int valor[4], i, posicao, Maior;
	
	for(i=0;i<4;i++)
	{
		printf("\nleia valor: ");
		scanf("%i", &valor[i]);
		
		if(i==0)
		{
			Maior = valor[i];
		}else{
			if(valor[i] > Maior)
			{
				Maior = valor[i];
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
		
		if(valor[i] == Maior)
		{
			posicao = i;
		
		}	
	}
	
	
	printf("\n\nO maior valor e: %i\n", Maior);
	printf("\nA posicao que o maior valor se encontra no vetor e: %i\n", posicao);
	
}
