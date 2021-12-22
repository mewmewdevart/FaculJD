// Linguagem C

// Ler os valores inteiros em x e y. Efetua a troca de seus valores e mostre seus conteúdos.

#include <stdio.h>
main() {
	int num1;
	int num2;
	int result;
	
	printf ("Digite o primeiro numero que deseja ?");
	scanf ("%i", &num1); 
	
	printf ("Digite o segundo numero que deseja ?");
	scanf ("%i", &num2); 
	
	num1 = num1 * num1;
	num2 = num2 * num2 ;

	result = num1 + num2 ;
	
	
	printf ("%i", result);
}
	
