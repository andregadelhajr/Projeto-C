float leValidaNota(int ind);

main(){
	
	float notas[30];
	int indice;
	
	for(indice=0;indice<30;indice++)
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
