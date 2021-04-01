char leValidaLetra();
main(){
	int ind;
	char palavra[10];
	for(ind=0;ind<10;ind++){
		palavra[ind]=leValidaLetra();
	}
	palavra[ind]='\0';
	printf("Palavra digitada: %s\n", palavra);
}
char leValidaLetra(){
	char letra;
	do{
		printf("Digite uma letra:\n");
		letra=getche();
		if((letra<'a'||letra>'z')&&(letra<'A'||letra>'Z')){
			printf("\nLetra invalida.\n");
		}
	}while((letra<'a'||letra>'z')&&(letra<'A'||letra>'Z'));
	return letra;
}
