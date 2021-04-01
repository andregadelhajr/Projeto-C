#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int qtdeNascidas, qtdeMeses, contMasc=0, contMeses=0, cont=0;
	char sexo;
	float porcMortas=0, porcMascMortas=0, porc24Meses=0;
	
	printf("Digite as informações pedidas sobre as crianças: ");
	
	printf("\n\nDigite a quantidade de criancas nascidas no periodo: ");
	scanf("%i", &qtdeNascidas);
	
	if(qtdeNascidas>0)
	{
		do
		{
			printf("Digite o sexo: ");
			sexo = getche();
			if(sexo!='\r')
			{
				cont++;
				printf("Digite o numero de meses de vida da criança que morreu: ");
				scanf("%i", &qtdeMeses);
				if(sexo=='m' || sexo=='M')
				{
					contMasc++;
				}
				
				if(qtdeMeses<=24)
				{
					contMeses++;
				}	
			}
			
		}while(sexo!='\r' && cont<=qtdeNascidas);
		
		porcMortas=(cont*100.0)/qtdeNascidas;
		porcMascMortas=(contMasc*100.0)/cont;
		porc24Meses=(contMeses*100.0)/cont;
		printf("\nPorcentagem de criancas mortas no periodo %.2f%%.\n", porcMortas);
		printf("Porcentagem de criancas masculinas mortas no periodo %.2f%%.\n", porcMascMortas);
		printf("Porcentagem de criancas que viveram 24 meses ou menos no periodo %.2f%%.\n\n", porc24Meses);
		
	}else
	{
		printf("\nNao ha criancas nascidas no periodo\n");
	}
	
}

