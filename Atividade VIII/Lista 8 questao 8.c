#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	float n1,n2,n3;
	
	printf ("Digite aqui o primeiro valor: ");
	scanf ("%f", &n1);
	printf ("Digite aqui o segundo valor: ");
	scanf ("%f", &n2);
	printf ("Digite aqui o terceiro valor: ");
	scanf ("%f", &n3);
	
	if(n1>n2 && n2>n3)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n3, n2, n1);
	}else if(n1>n3 && n3>n2)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n2, n3, n1);
	}else if(n2>n1 && n1>n3)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n3, n1, n2);
	}else if(n2>n3 && n3>n1)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n1, n3, n2);
	}else if(n3>n2 && n2>n1)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n1, n2, n3);
	}else if(n3>n1 && n1>n2)
	{
		printf ("\nA ordem crescente dos numeros é: %f, %f, %f",n2, n1, n3);
	}
	

}
