#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num1, num2, soma; 
	
	printf ("digite o primeiro numero : \n");

    scanf ("%d",&num1);

    printf ("digite o segundo numero : \n"); 
    
    scanf ("%d",&num2);
    
    soma=num1+num2;
    
    printf ("o resultado da soma e: %d \n",soma);

	system ("pause");
	
	return 0; 
}
