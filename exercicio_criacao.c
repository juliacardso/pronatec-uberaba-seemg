#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
    setlocale(LC_ALL, "portuguese");
    
    int SOMAR,SOMAR1,SOMAR2,SUBTRAIR,SUBTRAIR1,SUBTRAIR2,MULTIPLICAR,MULTIPLICAR1,MULTIPLICAR2,SAIR,escolha;
    char opcao= 's';
    float DIVIDIR, DIVIDIR1, DIVIDIR2,D;
  
	while (opcao=='s'){
	 
	 printf ("menu : \n");
    printf ("(1) para SOMAR \n");
    printf ("(2) para SUBTRAIR \n");
    printf ("(3) para MULTIPLICAR \n");
    printf ("(4) para DIVIDIR \n");
    printf ("(0) para SAIR \n");
	printf ("sua op��o e: \n");
	
    scanf ("%d",&escolha);
	 
	switch (escolha){
		
		case 1 :
	 		printf ("\n\n SOMAR \n");
	 		printf ("informe o primeiro n�mero : \n ");
	 		scanf ("%d",&SOMAR1);
	 		printf ("informe o segundo n�mero : \n ");
	 		scanf ("%d",&SOMAR2); 
	 		SOMAR = SOMAR1 + SOMAR2;
	 		printf ("o resultado da SOMAR e : %d \n" , SOMAR);
	 
		break;
	
		case 2 :
			printf ("\n\n SUBTRAIR \n");
			printf ("informe o primeiro n�mero : \n ");
			scanf ("%d",&SUBTRAIR1);
			printf ("informe o segundo n�mero : \n");
			scanf ("%d",&SUBTRAIR2);
			SUBTRAIR = SUBTRAIR1 - SUBTRAIR2;
			printf ("o resultado da SUBTRAIR e : %d \n" , SUBTRAIR);
			
		break;
		
		case 3 :
			printf ("\n\n MULTIPLICAR \n");
			printf ("informe o primeiro n�mero : \n");
			scanf ("%d",&MULTIPLICAR1);
			printf ("informe o segundo n�mero : \n");
			scanf ("%d",&MULTIPLICAR2);
			MULTIPLICAR = MULTIPLICAR1 * MULTIPLICAR2;
			printf ("o resultado da MULTIPLICAR e : %d \n" , MULTIPLICAR);
			
		break;
	
		case 4 :
			printf ("\n\n DIVIDIR \n");
			printf ("informe o primeiro n�mero : \n");
			scanf ("%f",&DIVIDIR1);
			printf ("informe o segundo n�mero : \n");
			scanf ("%f",&DIVIDIR2);
			while (DIVIDIR2<=0){
			 printf ("denominador n�o pode ser menor ou igual 0. Redigite : \n");
		     scanf ("%f",&DIVIDIR2);
				
			}
			DIVIDIR = DIVIDIR1 / DIVIDIR2;
			printf ("o resultado da DIVIDIR e : %f \n" , DIVIDIR);
			
		break;
		
		case 0 :
		exit (0);	
			
		break;
	 
	 	default:
	 		
	 		printf ("para informar um erro digite 0  ate 4");
		
		break;
		
		printf ("\n");
			
	}
	
	printf ("deseja continuar ? s/n");
	scanf (" %c",&opcao);
	if (opcao=='s')
	system ("cls");
}
	
	 system ("pause");
     return 0;
}
