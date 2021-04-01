
void mostrarLetras(char letra);

main(){
	
	char letra;
	
	printf("Digite uma letra qualquer do alfabeto: ");
	letra = getche();
	letra = toupper(letra);
	
	printf("\n\n\nTodas as demais letras do alfabeto ate o seu final, apos a digitada:\n");
	mostrarLetras(letra);
}

void mostrarLetras(char letra)
{
	char letras[25] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i;
	
  switch(letra)
  {
  	case 'A':
  		for( i = 0 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
  	case 'B':
  		for( i = 1 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'C':
  		for( i = 2 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'D':
  		for( i = 3 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'E':
  		for( i = 4 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'F':
  		for( i = 5 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'G':
  		for( i = 6 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'H':
  		for( i = 7 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'I':
  		for( i = 8 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'J':
  		for( i = 9 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'K':
  		for( i = 10 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'L':
  		for( i = 11 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'M':
  		for( i = 12 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'N':
  		for( i = 13 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'O':
  		for( i = 14 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'P':
  		for( i = 15 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'Q':
  		for( i = 16 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'R':
  		for( i = 17 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'S':
  		for( i = 18 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'T':
  		for( i = 19 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'U':
  		for( i = 20 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'V':
  		for( i = 21 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'W':
  		for( i = 22 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'X':
  		for( i = 23 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'Y':
  		for( i = 24; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	case 'Z':
  		for( i = 25 ; i <= 25; i++)
       {  
            printf("\n%c", letras[i]);                            
       }
  	    break;
	default :
		system("cls");
  		printf("\n\n\t\t\t\t\tFoi difitado valor errado, tente novamente.\n\n");	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	      
  }
  

}
