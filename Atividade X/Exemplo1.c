
int leValidaIdade();//protótipo da função (para informar ao programa principal que existe essa função criada em algum lugar do arquivo).
float leValidaAltura();
char leValidaSexo();

void exibir(int idade, float altura, char sexo);

main(){
	
	int idade;
	float altura;
	char sexo;
	
	idade = leValidaIdade();
	altura = leValidaAltura();
	sexo = leValidaSexo();
	
	exibir(idade, altura, sexo);
	
}

int leValidaIdade(){
	int id;
	do{
		printf("Digite a idade da pessoa:\n");
		scanf("%i", &id);
		if(id<0){
			printf("Idade invalida.\n");
		}
	}while(id<0);
	return id;
}

float leValidaAltura(){
	float alt;
	do{
		printf("Digite a altura da pessoa:\n");
		scanf("%f", &alt);
		if(alt<=0){
			printf("Altura invalida.\n");
		}
	}while(alt<=0);
	return alt;
}

char leValidaSexo(){
	char sx;
	do{
		printf("Escolha o sexo: m - masculino ou f - feminino.\n");
		sx = getche();
		sx = toupper(sx);
		if(sx!='M' && sx!='F'){
			printf("\nSexo invalido.\n");
		}
	}while(sx!='M' && sx!='F');
	return sx;
}

void exibir(int idade, float altura, char sexo){
	
	printf("\nIdade: %i\n", idade);
	printf("Altura: %.2f\n", altura);
	
	if(sexo == 'M'){
		printf("Sexo masculino.\n\n");
	}else{
		printf("Sexo feminino.\n\n");
	}
	
}
