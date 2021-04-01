int leValidaMatricula(int *mat, int qtde);
int leValidaMeses(int *mes, int qtde);
void ordenacao(int *mat, int *meses, int qtde);
main(){
	int matriculas[50];
	int meses[50];
	int ind=0, qtde;
	do{
		matriculas[ind]=leValidaMatricula(matriculas, ind);
		meses[ind] = leValidaMeses(meses, ind);
		ind++;	
	}while(matriculas[ind-1]>0 && ind<50);
	if(ind<50){
		qtde=ind-1;
	}else{
		qtde=ind;
	}
	if(qtde>=2){
		ordenacao(matriculas, meses, qtde);
		puts("Os tres trabalhadores mais recentes: ");
		for(ind=0;ind<3;ind++){
			printf("Matricula: %i\n", matriculas[ind]);
			printf("Meses trabalhados: %i\n\n", meses[ind]);
		}
	}
}

int leValidaMatricula(int *mat, int qtde){
	int matricula;
	int ind, flag;
	do{
		flag=0;
		printf("Digite a %i%c matricula:\n", qtde+1, 166);
		scanf("%i", &matricula);
		if(matricula<0){
			puts("Matricula deve ser maior ou igual a zero.");
			flag=1;
		}else{
			for(ind=0;ind<qtde;ind++){
				if(matricula==mat[ind]){
					puts("Matricula deve ser diferente.");
					flag=1;
					break;
				}
			}
		}
	}while(flag==1);
	return matricula;
}

int leValidaMeses(int *mes, int qtde){
	int meses;
	int ind, flag;
	do{
		flag=0;
		printf("Digite a quantidade de meses trabalhados:\n");
		scanf("%i", &meses);
		if(meses<=0){
			puts("Meses deve ser maior que zero.");
			flag=1;
		}else{
			for(ind=0;ind<qtde;ind++){
				if(meses==mes[ind]){
					puts("Meses deve ser diferente.");
					flag=1;
					break;
				}
			}
		}
	}while(flag==1);
	return meses;
}

void ordenacao(int *mat, int *meses, int qtde){
	int auxMat, auxMes, ind1, ind2;
	
	for(ind1=0;ind1<qtde-1;ind1++){
		for(ind2=ind1+1;ind2<qtde;ind2++){
			if(meses[ind1]>meses[ind2]){
				auxMes = meses[ind1];
				meses[ind1] = meses[ind2];
				meses[ind2] = auxMes;
				auxMat = mat[ind1];
				mat[ind1] = mat[ind2];
				mat[ind2] = auxMat;
			}
		}
	}
}
