#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	char sexo;
	
	printf("Digite o sexo da pessoa:\n");
	scanf("%c", &sexo);
	
	sexo = toupper(sexo);//tolower();
	sexo=='M'? printf("\nO Sexo � masculino.\n"):sexo=='F'?printf("\nO Sexo � feminino.\n"):printf("\nO Sexo � invalido.\n");
}
