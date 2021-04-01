
void exibir (char *nome);

main(){
	
	char nome[25];
	
    printf("Digite um nome: ");
	gets(nome);	
	
	exibir(nome);
}

void exibir (char *nome)
{
	printf("\n\nnome: %s\n", nome);
}

