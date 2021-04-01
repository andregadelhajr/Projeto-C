char leValidaSexo();
main(){
	char sexo[10];
	int ind;
	for(ind=0;ind<10;ind++)
		sexo[ind] = leValidaSexo();
	
	
	for(ind=0;ind<10;ind++)
		if(sexo[ind]=='M'){
			puts("Sexo masculino.");
		}else{
			puts("Sexo feminino.");
		}
}

char leValidaSexo(){
	char sexo;
	do{
		printf("Escolha o sexo: M - masculino ou F - feminino.\n");
		sexo=getche();
		sexo = toupper(sexo);
		if(sexo!='M' && sexo!='F'){
			printf("Sexo invalido.\n");
		}
	}while(sexo!='M' && sexo!='F');
	return sexo;
}
