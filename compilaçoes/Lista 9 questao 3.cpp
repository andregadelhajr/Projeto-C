#include<locale.h>

main(){
	
  setlocale(LC_ALL, "portuguese");
  float altura, somaAltura,mediaAltura, maior, menor, i, i2;
  int homens;
  char continuar, sexo;
  
  i=0;
  homens=0;
  maior=0;
  menor=0;

  while(i<=10)
  {
  	
  for(i2=1;i2<=10;i++)
  {

  printf("Digite o sexo da ",i2,"º pessoa: ");
  scanf("%c", &sexo);
  printf("Digite a altura da",i2,"º pessoa: ");
  scanf("%f", &altura);
  
  if (i==0)
  {
  	maior=altura;
  }else if(altura>maior)
  {
  	maior=altura;
  } 
  
  if(i==0)
  {
  	menor=altura
  }else if(altura<menor)
  {
  	menor=altura;
  }


  }
    i = i + 1;
  }

  printf("\nmaior altura é: %f\n", maior);
  printf("menor altura é: %f\n", menor);

}
