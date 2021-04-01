main (){
	int horas,minutos,segundo;
	
	printf ("Digite a hora: ");
	scanf ("%i", &horas);
	
	minutos = horas*60;
	segundo = horas*3600;
	
	printf ("Corresponde em %i minuto e %i segundo\n", minutos, segundo);
}
