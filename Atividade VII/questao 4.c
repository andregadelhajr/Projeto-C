
main()
{
	int dividendo, divisor, resto;
	float quociente;
	
	printf ("Digite aqui o valor do dividendo para divisao: ");
	scanf ("%i", &dividendo);
	printf ("Digite aqui o valor do divisor para divisao: ");
	scanf ("%i", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	printf ("\nO quociente da divisao e %f e o resto e %i",quociente, resto);
}
