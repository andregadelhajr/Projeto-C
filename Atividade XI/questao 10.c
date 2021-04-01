char leValidaLetra();
void exibir (char *nome, char parada);

main(){
	
	int i;
	char nome[25], parada='#';
	
	for(i=0;i<25;i++){
	    nome[i]=leValidaLetra();
	}
	nome[i]='\0';
	
	exibir(nome, parada);
}

void exibir (char *nome, char parada)
{
	int i;
	
	puts("nome: ");
	
	for(i=0;nome!=parada;i++)
	{
		printf("%s", nome[i]);
	}
}

char leValidaLetra()
{
	char letra;
	
	do{
		printf("\nDigite uma letra: ");
		letra=getche();
	    
		if((letra<'a'||letra>'z') && (letra<'A'||letra>'Z') && letra!=' ' && letra!='#'){
			printf("\nLetra invalida.\n");
		}
	}while((letra<'a'||letra>'z') && (letra<'A'||letra>'Z') && letra!=' ' && letra!='#');
	
	return letra;
}

