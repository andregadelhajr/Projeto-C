#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int voto, qtdMara, i, qtdPele;
	int candidatos, qtdNulo, qtdBranco;
	
	qtdMara = 0;
	qtdPele = 0;
	qtdNulo = 0;
	qtdBranco = 0;
	
	printf("Numero de candidatos: ");
	scanf("%i", &candidatos);
	
	for(i=1;i<=candidatos;i++)
	{
		
		printf("\n=====================================================");
		printf("\nDigite o voto no seu candidato:\n");
		printf("25 - Pel�\n");
		printf("33 - Maradona\n");
		printf("00 - Branco\n");
		printf("Op��o: ");
	    scanf("%i", &voto);
	    printf("=====================================================\n");
            	    
	    if(voto == 25)
		{
			qtdPele++;
		}else 
		    if(voto == 33)
			{
				qtdMara++;
			}else
			    if(voto == 00 || voto == 0)
				{
					qtdBranco++;
				}else
				{
					qtdNulo++;
				}
		
	}
	
	printf("\n\n=====================================================");
	printf("\nQuantidade de votos do Pel�: %i\n", qtdPele);
	printf("Quantidade de votos do Maradona: %i\n", qtdMara);
	printf("Quantidade de votos em Branco: %i\n", qtdBranco);
	printf("Quantidade de votos em Nulo: %i\n", qtdNulo);
	printf("=====================================================\n");
	    
	if(qtdPele == qtdMara)
	{
		printf("\n\n\t\tResultado final\n");
		printf("\t\t\tEMPATE.\n\n");
	}else
	    if(qtdPele > qtdMara)
		{
			printf("\n\n\t\t  Resultado final\n");
			printf("\t\tVencedor - Pel�.\n\n");
		}else
		{
			printf("\n\n\t\t  Resultado final\n");
			printf("\t\tVencedor - Maradona.\n\n");
		}
	
}	
	

