main (){
	int rolo, metrosAvulsos, metrosFios;
	int rolos;  
	
	rolo = 50;
		
	printf ("Digite a quantidade de metros de fios necessarios: ");
	scanf ("%d", &metrosFios);
	
	rolos = metrosFios / rolo;
	metrosAvulsos = metrosFios % rolo;
	
	printf ("\nA quantidade de rolos necessaria para a obra e de  %d rolos", rolos);
	printf ("\nA quantidade de metros de fios avulsos e de %d metros", metrosAvulsos);
	
}



