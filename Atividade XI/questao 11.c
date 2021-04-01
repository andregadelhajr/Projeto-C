int leValidaQtdeFuncionarios();
int leValidaMatricula(int qtde, int matriculas[]);
float leSalario();
float MediaSalario(float soma, int qtde);

void ValidSalario(float SMa, float SMe);
void leMedia(float media);


main(){
	
	float salario[100], salarioMaior, salarioMenor, soma=0, media;
	int qtde, matriculas[100], i;
	
	qtde = leValidaQtdeFuncionarios();
	
	for(i=0;i<qtde;i++)
	{

		matriculas[i] = leValidaMatricula(qtde, matriculas);
		salario[i] = leSalario();
		
		soma = soma + salario[i];
		
		if(i==0)
		{
			salarioMaior = salario[i];
			salarioMenor = salario[i];
		}else{
			if(salario[i] > salarioMaior)
			{
				salarioMaior = salario[i];
			}
			if(salario[i] < salarioMenor)
			{
				salarioMenor = salario[i];
			}
		}		
	}
	
	media = MediaSalario(soma, qtde);
	
	system("cls");
	ValidSalario(salarioMaior, salarioMenor);
	leMedia(media);
}

int leValidaQtdeFuncionarios(){
	int qtde;
	
	do{
		
		printf("Digite a quantidade de funcionarios: ");
		scanf("%i", &qtde);
		
		if(qtde<0 || qtde>100)
		{
			printf("\nQuantidade invalida.\n");
		}
	}while(qtde<0 || qtde>100);
	
	return qtde;
}

int leValidaMatricula(int qtde, int matriculas[])
{
	int matricula;
	int flag, ind;
	
	do{
		flag=0;
		
		printf("\nDigite a matricula: ");
		scanf("%i", &matricula);
		
		if(matricula<0)
		{
			flag=1;
			printf("\nMatricula invalida.\n");
		}else
		{
			for(ind=0;ind<qtde;ind++)
			{
				if(matricula==matriculas[ind])
				{
					printf("\nMatricula deve ser diferente.\n");
					flag=1;
					break;
				}
			}
		}
	}while(flag==1);
	
	return matricula;
}

float leSalario()
{
	float salario;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	return salario;
}

void ValidSalario(float SMa, float SMe)
{
	printf("\n\n\n\t\t\t\t\tO maior salario dos funcionarios e: %.2f", SMa);
	printf("\n\t\t\t\t\tO menor salario dos funcionarios e: %.2f", SMe);
}

float MediaSalario(float soma, int qtde)
{
	float mediaSalario;
	
	mediaSalario = soma / qtde;
	
	return mediaSalario;
}

void leMedia(float media)
{
	printf("\n\t\t\t\t\tA media do salario dos funcionarios e: %.2f\n\n\n\n", media);
}
