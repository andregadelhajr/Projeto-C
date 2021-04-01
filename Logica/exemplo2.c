float calculaMedia(float prova1, float prova2, float prova3);
main(){
	float prova1, prova2, prova3, medias[70];
	char continuar;
	int indice=0, indice2;
	do{
		printf("\nDigite as notas do %i%c aluno:",indice+1, 167);
		printf("\nDigite a nota da prova 1:\n");
		scanf("%f", &prova1);
		printf("Digite a nota da prova 2:\n");
		scanf("%f", &prova2);
		printf("Digite a nota da prova 3:\n");
		scanf("%f", &prova3);
		medias[indice] = calculaMedia(prova1, prova2, prova3);
		printf("Pressione 's' para novo aluno.\n");
		continuar = getche();
		continuar = toupper(continuar);
		indice++;
	}while(continuar=='S' && indice<70);
	
	for(indice2=0;indice2<indice;indice2++){
		printf("\nA media do %i%c aluno e = %.2f\n",indice2+1, 167, medias[indice2]);
	}
	
}

float calculaMedia(float prova1, float prova2, float prova3){
	return (prova1+prova2+prova3)/3;
}
