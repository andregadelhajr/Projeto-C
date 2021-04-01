main()
{
  int n, i, fatorial;

  printf("Digite um valor para saber fatorial: ");
  scanf("%d", &n);

  fatorial = 1;
  i = 2;
  
  while (i <= n) {
  	
    fatorial = fatorial * i;
    i = i + 1;     
	               
  }

  printf("\n%d! = %d\n", n, fatorial);

}
