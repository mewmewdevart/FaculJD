// Linguagem C

// Ler o salário de um funcionário e mostre o novo salário com reajuste de 15%.
#include <stdio.h>
main() {
	int salario;
	int reajuste;
	
	printf ("Qual e o seu salario? \n");
	scanf ("%i", &salario); 
	
	reajuste = salario * 100/15 ;
	
	printf ("%i", reajuste); 
	
	
}
