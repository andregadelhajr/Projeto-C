
float calculaPotencia(float x, int n);

main(){
	
	float x;
	int n;
	
	printf("Digite um valor para x:\n");
	scanf("%f", &x);
	printf("Digite um valor para n:\n");
	scanf("%i", &n);
	
	printf("%.2f elevado %i = %.2f\n", x, n, calculaPotencia(x, n));
	
}

float calculaPotencia(float x, int n)
{
	
	int controle;
	float aux = x;
	
	for(controle=1;controle<n;controle++)
	{
		aux = aux*x;
	}
	
	return aux;
}
