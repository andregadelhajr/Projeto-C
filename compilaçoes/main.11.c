#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int dividendo, divisor, resto;
	int quociente;
	
	printf ("Digite aqui o valor do dividendo para divisao: ");
	scanf ("%f", &dividendo);
	printf ("Digite aqui o valor do divisor para divisao: ");
	scanf ("%f", &divisor);
	
	quociente = dividendo + divisor;
	resto = dividendo * divisor;
	
	printf ("\nO quociente da divisao e %f e o resto e %f",quociente, resto);
}
