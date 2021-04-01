main(){
	
	int fat=1,i=1,n;
	
	printf("Digite numero");
	scanf("%i", &n);
	
	
	while(i <= n)
	{
		fat = fat * i;
		i++;
	}
	
	printf("%i! = %i", n, fat);
}
