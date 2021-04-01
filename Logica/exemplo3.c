main(){
	char letra;
	
	printf("Digite uma letra:\n");
	letra = getche();
	letra = tolower(letra);
	printf("\n");
	if(letra>='a' && letra<='z'){
		for(;letra<='z';letra++){
			printf("%c ", letra);
		}
	}
}
