#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	char sexo;
	
	printf("Digite o sexo da pessoa:");
	scanf("%c", &sexo);
	
	sexo=='M'||sexo=='m'? printf("\nO Sexo masculino.\n"):sexo=='F'||sexo=='f'?printf("\nO Sexo feminino.\n"):printf("\nO Sexo invalido.\n");
}
