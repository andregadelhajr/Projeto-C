char leValidaCaracter();
void descrecente(char *Caracter);

main(){
	int ind;
	char Caracter[30];
	
	printf("Digite informacoes pedida abaixo: \n");
	
	for(ind=0;ind<30;ind++){
		Caracter[ind]=leValidaCaracter();
	}
	
	printf("\n\nCaracter em ordem descrecente: \n");
	descrecente(Caracter);
	
	for(ind=0;ind<30;ind++)
	{
		printf("\n%c", Caracter[ind]);
	}
}

char leValidaCaracter()
{
	char letra;
	
	do{
		printf("\nDigite uma caracter: ");
		letra=getche();
		letra=toupper(letra);
		
		if(letra<'A'||letra>'Z'){
			printf("\nCatacter invalido.\n");
		}
	}while(letra<'A'||letra>'Z');
	
	return letra;
}

void descrecente(char *Caracter)
{
	int ind1, ind2;
	char aux;
	
	for(ind1=0;ind1<30;ind1++){
		for(ind2=ind1+1;ind2<30;ind2++){
			if(Caracter[ind1]>Caracter[ind2]){
				aux = Caracter[ind1];
				Caracter[ind1] = Caracter[ind2];
				Caracter[ind2] = aux;
			}
		}
	}
}
