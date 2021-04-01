char leValidaLetra();

main(){
	
	char letras[30];
	int indice;
	
	for(indice=0;indice<30;indice++)
	{
		letras[indice] = leValidaLetra();
	}
	
	printf("\nLetras em ordem inversa:\n");
	
	for(indice=29;indice>=0;indice--)
	{
		printf("%c ", letras[indice]);
	}
	
	printf("\n");
}

char leValidaLetra()
{
	
	char lt;
	
	do{
		
		printf("Digite uma letra:\n");
		lt = getche();
		
		if((lt<'a'|| lt>'z') && (lt<'A' || lt>'Z'))
		{
			printf("Caracter invalido.\n");
		}
	}while((lt<'a'|| lt>'z') && (lt<'A' || lt>'Z'));
	
	return lt;
}

