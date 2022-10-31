#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num2, num3, subtracao; 
	
	printf ("digite o primeiro numero : \n");

    scanf ("%d",&num2);

    printf ("digite o segundo numero : \n"); 
    
    scanf ("%d",&num3);
    
    subtracao=num2-num3;
    
    printf ("o resultado da subtracao e: %d \n",subtracao);

	system ("pause");
	
	return 0; 
}
