#include<stdio.h>
void leValidaTexto(char texto[]);
main(){
	char texto[45], texto2[45], nome[25];
	int tamanho;
	leValidaTexto(texto);
	system("cls");
	puts(texto);
	
	tamanho = strlen(texto);
	printf("A quantidade de caracteres digitada foi de %i\n", tamanho);
	
	strcpy(texto2,texto);
	
	printf("Texto2: %s\n", texto2);
	puts("Digite seu nome:");
	fflush(stdin);
	gets(nome);
	strcat(texto, nome);
	puts(texto);
	
}

void leValidaTexto(char texto[]){
	do{
		puts("Digite um texto:");
		fflush(stdin);
		gets(texto);
		if(strcmp(texto,"")==0){
			puts("Texto obrigatorio.");
		}
	}while(strcmp(texto,"")==0);
}
