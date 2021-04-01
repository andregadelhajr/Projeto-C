// Sintese
//   objetivo "Lista 2, exercicio 5 = Palindromo"
//   entrada "palavra ou frase"
//   saida "e ou nao palindromo"

#include <stdio.h>
#include <string.h>

int main(void) {
	char palavra[100], palavra2[100], palavra3[100];
	int ini, fim;
	
	printf("Digite uma palavra/frase:");
	gets(palavra);
	
	ini = 0;
	for (fim=strlen(palavra)-1; fim >= 0; fim--) {
		if (palavra[fim] != ' ') {
			palavra2[ini] = palavra[fim];
			ini++;
		}
	}
	palavra2[ini] = '\0';

	for (fim=strlen(palavra2)-1, ini=0; fim >= 0; fim--, ini++)
		palavra3[ini] = palavra2[fim];
	palavra3[ini] = '\0';

	if (strcmp(palavra2, palavra3) == 0)
		printf("E palindromo");
	else
		printf("Nao e palindromo");
	
	return 0;
}

/*
int main(void) {
	char palavra[100];
	int ini=0, fim;
	
	printf("Digite uma palavra/frase:");
	gets(palavra); // mega bobagem
	
	fim = strlen(palavra)-1;
	while ((palavra[ini] == palavra[fim]) && (ini < fim)) { // ini=0,1,2,3,4,5   fim=11,10,9,8,7
		ini++;
		fim--;
		while ((palavra[ini] == ' ') && (ini < fim))
			ini++;
		while ((palavra[fim] == ' ') && (ini < fim))
			fim--;
	}
	
	if (palavra[ini] != palavra[fim])
		printf("Nao palindromo");
	else
		printf("E palindromo");
	
	return 0;
}
*/

