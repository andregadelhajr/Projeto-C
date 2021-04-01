
float calculaMedia(float prova1, float prova2, float prova3);

main(){
	
	float prova1, prova2, prova3, media;
	char continuar;
	
	do
	{
		
		printf("\nDigite a nota da prova 1:\n");
		scanf("%f", &prova1);
		printf("Digite a nota da prova 2:\n");
		scanf("%f", &prova2);
		printf("Digite a nota da prova 3:\n");
		scanf("%f", &prova3);
		
		media = calculaMedia(prova1, prova2, prova3);
		
		printf("A media do aluno e = %.2f\n\n", media);
		printf("Pressione 's' para novo aluno.\n");
		continuar = getche();
		continuar = toupper(continuar);
		
	}while(continuar=='S');
}

float calculaMedia(float prova1, float prova2, float prova3)
{
	
	return (prova1+prova2+prova3)/3;
	
}
