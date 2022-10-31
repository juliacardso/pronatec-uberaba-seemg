#include <stdio.h>
#include <stdlib.h>

int main (void){

  int dias;
  
  printf ("digite o dia da semana : ");
  
  scanf ("%d", dias);
  switch (dias){
  	
  	case 1 :
  	printf ("dias da semana %d - DOMINGO \n",dias);
  	break;
  	
  	case 2 :
  	printf("dias da semana %d -SEGUNDAS-FEIRA \n",dias);
  	break;
  	
  	case 3 :
  	printf("dias da semana %d -TERCA-FEIRA \n",dias);
  	break;
  	
  	case 4:
  	printf("dias da semana %d -QUARTA-FEIRA \n",dias);
  	break;
  	
  	case 5:
  	printf("dias da semana %d -QUINTA-FEIRA \n",dias);
  	break;
  	
  	case 6:
  	printf("dias da semana %d -SEXTA-FEIRA \n",dias);
  	break;
  	
  	case 7:
  		printf("dias da semana %d -SABADO \n",dias);
  	break;
  	
  	default:
  		
  		printf("nao e dia de semana ! \n",dias);
  	break;
  }
  system ("pause");
  return 0;
}

