
float media(float A1, float A2, float A3, float AS);

main(){
	
	float avaliacao1, avaliacao2, avaliacao3, avaliacaoS, final;
	char continuar;
	
	do{
		system("cls");
		printf("Efetue o calculo relacionado a avaliacao final de algoritmos da programacao 2020/2\n");
	    printf("\nDigite a nota da primeira avaliacao: ");
	    scanf("%f", &avaliacao1);
	    printf("Digite a nota da segunda avaliacao: ");
	    scanf("%f", &avaliacao2);
	    printf("Digite a nota da terceira avaliacao: ");
	    scanf("%f", &avaliacao3);
	    printf("Digite a nota das atividades supervisionadas: ");
	    scanf("%f", &avaliacaoS);
	    
	    final = media(avaliacao1, avaliacao2, avaliacao3, avaliacaoS);
	    
	    printf("\n\nA media final do aluno e: %.2f", final);
	    
	    printf("\n\nPressione 's' para novo aluno.\n");
		continuar = getche();
		continuar = toupper(continuar);
		
	}while(continuar=='S');
	
}

float media(float A1, float A2, float A3, float AS)
{
	float media;
	
	media = (A1*0.20) + (A2*0.20) + (A3*0.30) + (AS*0.30);
	
	return media;  
}
