#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	float altura, menor, maior, soma, media;
	char sexo;
	int contHomens=0, contMulheres=0, cont=1;
	
	printf("Digite as informações pedidas sobre as pessoas: ");
	
	do
	{
		printf("\n\nDigite a altura da %iº pessoa: ", cont);
		scanf("%f", &altura);
		printf("Digite o sexo da pessoa: ");
		sexo = getche();
		
		if(cont==1)
		{
			menor=altura;
			maior=altura;
		}else
			if(altura<menor)
			{
				menor=altura;
			}else
				if(altura>maior)
				{
					maior=altura;
				}
		
		if(sexo=='f' || sexo=='F')
		{
			soma += altura;
			contMulheres++;
		}else
			if(sexo=='m' || sexo=='M')
			{
				contHomens++;
			}else
			{
				printf("\nSexo invalido.\n");
			}
			
		cont++;
		
	}while(cont<=10);
	
	
	if(contMulheres>0)
	{
		media = soma/contMulheres;
		printf("\nA media de altura das mulheres e de %.2f\n", media);
	}
	
	printf("\nA maior altura do grupo e de %.2f\n", maior);
	printf("A menor altura do grupo e de %.2f\n", menor);
	printf("A quantidade de pessoas do sexo masculino e de %i\n\n", contHomens);
	
}

