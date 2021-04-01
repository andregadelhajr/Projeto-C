#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int valor1, valor2, resultado;
	
	printf("Digite um valor: \n");
	scanf("%i", &valor1);
	
	printf("Digite um valor: \n");
	scanf("%i", &valor2);
	
	resultado = valor2 - valor1;
	
	printf("Soma = %i\n",resultado);
}
