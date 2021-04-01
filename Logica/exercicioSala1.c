float leValidaAltura(int contador);
main(){
	float alturas[50], soma=0;
	int ind=0, qtde;
	do{
		alturas[ind] = leValidaAltura(ind);
		ind++;
		printf("Pressione 's' para novo aluno:\n");
	}while(getch()=='s' && ind<50);
	qtde=ind;
	for(ind=0;ind<qtde;ind++){
		printf("Altura do %i%c aluno e %.2f\n", ind+1, 167, alturas[ind]);
	}
	
	for(ind=0;ind<qtde;ind++){
		soma+=alturas[ind];
	}
	printf("A media das alturas dos alunos e de %.2f\n",soma/qtde);
	
}
float leValidaAltura(int contador){
	float altura;
	do{
		printf("Digite a altura do %i%c aluno:\n", contador+1, 167);
		scanf("%f", &altura);
		if(altura<=0){
			puts("Altura invalida.");
		}
	}while(altura<=0);
	return altura;
}
