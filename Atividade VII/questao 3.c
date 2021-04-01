main(){
	float media,n1,n2,n3;
	
	printf ("Digite o primeiro numero para calculo da media: ");
	scanf ("%f", &n1);
	printf ("Digite o segundo numero para calculo da media: ");
	scanf ("%f", &n2);
	printf ("Digite o terceiro numero para calculo da media: ");
	scanf ("%f", &n3);
	
	media = (n1+n2+n3) / 3;
	
	printf ("\nA media dos tres numeros escolhidos e: %f", media);
	
}
