#include<locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	char sexo;

	printf ("Digite 'm' � 'f' para o sexo da pessoa: ");	
	scanf ("%c", &sexo);
	
	sexo=='m'||sexo=='M' ? printf("\nO Sexo � masculino.\n"):sexo=='f'||sexo=='F' ? printf("\nO sexo � feminino.\n");

}

