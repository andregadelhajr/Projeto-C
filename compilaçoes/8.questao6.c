#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	char sexo;

	printf ("Digite 'm' é 'f' para o sexo da pessoa: ");	
	scanf ("%c", &sexo);
	
	sexo=='m'||sexo=='M' ? printf("\nO Sexo é masculino.\n"):sexo=='f'||sexo=='F' ? printf("\nO sexo é feminino.\n");

}

