
main(){
	
  float altura, somaAltura,mediaAltura, maior, menor;
  int homens, mulheres, i, i2;
  char continuar, sexo;
  
  homens=0;
  mulheres=0;
  i=0;
  somaAltura=0;
  	
  while(i<=3)
  {
  
  printf("Digite o sexo e a altura da pessoa: ");
  scanf("%c %f", &sexo, &altura);
  
  if (i==0)
  {
  	maior=altura;
  	menor=altura;
  }else if(altura<menor)
  {
  	menor=altura;
  }else if(altura>maior)
  {
  	maior=altura;
  }  
  
  if(sexo=='m' || sexo=='M')
  {
    homens = homens + 1;	
  }else if(sexo=='f' || sexo=='F')
  {
  	mulheres = mulheres + 1;
    somaAltura = somaAltura + altura;
  }

  i = i + 1;
  mediaAltura = somaAltura / mulheres;
  
  }
    

  printf("\nmaior altura e: %f\n", maior);
  printf("menor altura e: %f\n", menor);
  printf("Numero de homens: %i\n", homens);
  printf("A media da altura das mulheres: %f", mediaAltura);

}
