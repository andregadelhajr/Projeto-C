#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, contMulheres, contHomens;
	float altura, menor, maior, media, soma;
	char sexo;
	
	contMulheres = 0;
	contHomens = 0;
	soma = 0;
	
	printf("Digite as informações pedidas sobre as pessoas: ");
	
	for(i=1;i<=10;i++)
	{
		
		printf("\n\nDigite a altura da %iº pessoa: ", i);
		scanf("%f", &altura);
		printf("Digite o sexo da %iº pessoa: ", i);
		sexo = getche();
		sexo = toupper(sexo);
		
		if(i==1)
		{
			menor = altura;
			maior = altura;
		}else{
			if(menor>altura)
			{
				menor = altura;
			}
			if(maior<altura)
			{
				maior = altura;
			}
		}
		
		switch(sexo)
		{
			case 'M':
				contHomens++;
				break;
			case 'F':
				contMulheres++;
				soma = soma+altura;
				break;
		}
	}

	printf("\nA menor altura e de %.2f\n", menor);
	printf("A maior altura e de %.2f\n", maior);
	
	if(contMulheres>0)
	{
		media = soma/contMulheres;
		printf("A media da altura das mulheres e de %.2f\n\n", media);
	}
	
	printf("O numero de homens e de %i\n\n", contHomens);
	
}
