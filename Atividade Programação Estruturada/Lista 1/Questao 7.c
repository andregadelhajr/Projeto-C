// Sintese
//   objetivo "Lista 1, exercicio 7 = Verificar dado viciado"
//   entrada "nenhuma"
//   saida "Numero de vezes de cada face"
#include <stdio.h>
#include <stdlib.h> // necess?rio p/ as fun??es rand() e srand()
#include <time.h> //necess?rio p/ fun??o time()

int main(void) {
	int i, jogadas[100];
	int lados[6]={0};
	
	srand(time(NULL));
	for (i=0; i<100; i++)
		jogadas[i] = (rand() % 6) + 1;

	for (i=0; i<100; i++)
		lados[jogadas[i]-1]++;
	
	for (i=0; i<6; i++) {
		printf("Quantide de vezes do %d = %d\n", i+1, lados[i]);
		if (lados[i] >= 27)
			printf("Lado viciado!!!\n");
	}
	
	return 0;
}
