
float calculaOperacao(int v1, int v2, char op);
void verificaResultado(int valor);

main(){
	
	int valor1, valor2, valor3;
	char operacao1, operacao2;
	float total;
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%i", &valor2);
	printf("Digite o terceiro valor: ");
	scanf("%i", &valor3);
	printf("\n\nEscolha a primeira operacao desejada: + - * /.\n");
	operacao1 = getche();
	printf("\nEscolha a segunda operacao desejada: + - * /.\n");
	operacao2 = getche();
	
	total = calculaOperacao(valor1, valor2, operacao1);
	total = calculaOperacao(total, valor3, operacao2);
	
	printf("\n\n%i %c %i %c %i = %.2f", valor1, operacao1, valor2, operacao2, valor3, total);
	verificaResultado(total);
	
}

float calculaOperacao(int v1, int v2, char op)
{
	
	float resultado;
	
	switch(op)
	{
		case '+':
			resultado = v1 + v2;
			break;
		case '-':
			resultado = v1 - v2;
			break;
		case '*':
			resultado = v1 * v2;
			break;
		case '/':
			resultado = v1 / v2;
			break;			
	}
	
	return resultado;
		
}

void verificaResultado(int valor)
{
	
	if(valor > 0)
	{
		printf("\nO resultado produzido e um numero maior que zero\n");
	}else 
	    if(valor < 0)
		{
			printf("\nO resultado produzido e um numero menor que zero\n");
		}else
		{
			printf("\nO resultado produzido e um numero igual a zero\n");
		}
	
}

