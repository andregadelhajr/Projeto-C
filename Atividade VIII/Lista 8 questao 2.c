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
	
	if(n1>n2 && n1>n3)
	{
		system("cls");
		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tO maior valor entre os três digitados é: %f\n\n\n\n\n\n\n\n\n\n",n1);
	}else if(n2>n1 && n2>n3)
	{
		system("cls");
		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tO maior valor entre os três digitados é: %f\n\n\n\n\n\n\n\n\n\n",n2);
	}else 
	{
		system("cls");
		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tO maior valor entre os três digitados é: %f\n\n\n\n\n\n\n\n\n\n",n3);
	}

}
