#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int tipoMovel;

	printf ("Escolha um Movel\n");
	printf ("1. Cadeira\n");
	printf ("2. Mesa de Computador\n");
	printf ("3. Estante de Livros\n");
	printf ("4. Mesa de Impressora\n");
	printf ("5. Estante de CD\n");
	printf ("Op��o: ");	
	scanf ("%i", &tipoMovel);

	
	switch(tipoMovel)
	{
		case 1:
			printf("\nO movel escolhido � Cadeira.\n");
			break;
		case 2:
			printf("\nO movel escolhido � Mesa de Computador.\n");
			break;
		case 3:
			printf("\nO movel escolhido � Estante de Livros.\n");
			break;
		case 4:
			printf("\nO movel escolhido � Mesa de Impressora.\n");
			break;
		case 5:
			printf("\nO movel escolhido � Estante de CD.\n");
			break;
		default:
			printf("\nMovel em falta ou invalido.\n");	
			break;			
	}
}
