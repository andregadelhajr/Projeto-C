#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int valor, contaDigitos=0;
	char continuar;
	
	printf("Digite informa��es pedodas a seguir");
	
	printf("\n\nDigite um valor inteiro positivo: ");
	scanf("%i", &valor);
	    
    if(valor<0)
	{
		printf("\nnNumero negativo.");
	}else
	{
		if(valor==0)
		{
			printf("\n\nO numero de algorismo �: 1");
		}else
		{
            while (valor > 0)
           {
               contaDigitos++;
               valor = valor / 10;
           }
           
           printf("\n\nO numero de algorismo �: %i\n\n", contaDigitos);
		}
	}
	
	
}	
	
	
	
	
	
	
