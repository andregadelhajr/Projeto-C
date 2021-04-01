
main()
{
	float altura, peso,IMC;
	
	printf ("Digite aqui o valor da altura: ");
	scanf ("%f", &altura);
	printf ("Digite aqui o valor do peso: ");
	scanf ("%f", &peso);
	
	IMC = peso / (altura*altura);
	
	if(IMC < 18.6)
	{
		printf ("\nO valor do IMC e %f, classificado como abaixo do peso",IMC);
	}else if(IMC>=18.6 || IMC<25)
	{
		printf ("\nO valor do IMC e %f, classificado como peso ideal",IMC);
	}else if(IMC>=25 || IMC<30)
	{
		printf ("\nO valor do IMC e %f, classificado como levemente acima do peso",IMC);
	}else if(IMC>=30 || IMC<35)
	{
		printf ("\nO valor do IMC e %f, classificado como obesidade grau I",IMC);
	}else if(IMC>=35 || IMC<40)
	{
		printf ("\nO valor do IMC e %f, classificado como obesidade grau II (severa)",IMC);
	}else if(IMC>=40)
	{
		printf ("\nO valor do IMC e %f, classificado como obesidade grau III (morvida)",IMC);
	}
	

}
