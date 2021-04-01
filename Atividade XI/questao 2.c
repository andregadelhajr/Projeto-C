
float leValidaNota(int ind);
int leValidaQtdeAlunos();

main(){
	
	float notas[100];
	int indice, numero;
	
	numero = leValidaQtdeAlunos();
	
	for(indice=0;indice<numero;indice++)
	{
		notas[indice] = leValidaNota(indice);
	}
}

float leValidaNota(int ind)
{
	float nota;
	
	do{
		
		printf("Digite a nota do %i%c aluno:\n", ind+1, 167);
		scanf("%f", &nota);
		
		if(nota<0 || nota>10)
		{
			printf("Nota invalida.\n");
		}
	}while(nota<0 || nota>10);
	
	return nota;
}

int leValidaQtdeAlunos()
{
	
	int qtde;
	
	do{
		
		printf("Digite o numero de alunos:\n");
		scanf("%i", &qtde);
		
		if(qtde>49 || qtde<0)
		{
			printf("Quantidade de alunos invalida.\n");
		}
	}while(qtde>49 || qtde<0);
	
	return qtde;
}
