#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	float lucro, lucroMaximo, preco, precoIng;
	int qtdeIng, qtdeIngressos = 120;
	
	for(preco=15; preco>=3; preco=preco-3)
	{
		lucro = (preco*qtdeIngressos)-600;
		
		if(preco==15)
		{
			lucroMaximo = lucro;
			precoIng = preco;
			qtdeIng = qtdeIngressos;
		}else
			if(lucroMaximo<lucro)
			{
				lucroMaximo = lucro;
			}
			
		printf("Lucro: R$%6.2f \t- \tPreco: R$%6.2f\n", lucro, preco);
		qtdeIngressos+=26;
     		
	}
	
	printf("\n\nO lucro maximo esperado é de R$%.2f\n", lucroMaximo);
	printf("O preco do ingresso é R$%.2f\n", precoIng);
	printf("A quantidade de ingressos vendidos éList %i\n\n", qtdeIng);
	
}

